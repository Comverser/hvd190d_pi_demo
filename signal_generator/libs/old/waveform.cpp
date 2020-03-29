#include "waveform.h"

/* variables: waveform constant parameters */
static const double volt_max = 200.0;
static const int volt_res = pow(2, 16) - 1;

/* variables: waveform conditions */
bool enable_x = true;
bool enable_y = true;
//int waveform_x = 0;
//int waveform_y = 0;
int freq_x = 30;
int freq_y = 30;
double volt_x = 120.0;
double volt_y = 120.0;
double volt_off_x = 60.0;
double volt_off_y = 60.0;
double phase_x = 0.0;
double phase_y = 0.0;

/* variables: waveform dynamic parameters */
static int s_x = 0;
static int s_y = 0;
static int s_max_x = 0;
static int s_max_y = 0;

static double t_x[fs_max] = {0,0};
static double t_y[fs_max] = {0,0};

static unsigned long t_us_x[fs_max] = {0};
static unsigned long t_us_y[fs_max] = {0};
static unsigned long cmd_x_p[fs_max] = {0};
static unsigned long cmd_x_n[fs_max] = {0};
static unsigned long cmd_y_n[fs_max] = {0};
static unsigned long cmd_y_p[fs_max] = {0};

static unsigned long cmd_xy_p[fs_max*2][2] = {{0}};
static unsigned long cmd_xy_n[fs_max*2][2] = {{0}};


static int gcd = 0;

static void shindebug()
{
    std::cout << "s_x : " << s_x << ", s_y" << s_y << std::endl;
    std::cout << "s_max_x : " << s_max_x << ", s_max_y" << s_max_y << std::endl;
    std::cout << "gcd : " << gcd << std::endl;
}

static double to_radian(double deg)
{
    return deg*(M_PI/180);
}
static int s_gen(int fs, int freq)
{
    int s = 0;
    if ((freq == 0) || (freq > fs))
    {
        s = 1;
    }
    else if ( (fs/freq) % 2 == 0 )
    {
        s = freq*(fs/freq);
    }
    else
    {
        s = freq*(fs/freq - 1);
    }
    return s;
}
static int fgcd(int f1, int f2)
{
    gcd = 1;
    for (int i=1; i <= f1 && i <= f2; ++i)
    {
        if ((f1 % i) == 0 && (f2 % i) == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
static int s_max_gen(int s, int gcd, bool enable)
{
    if (enable == false)
    {
        return 0;
    }
    double period = (double)1.0/gcd;
    return (int)(s*period);
}
static void t_gen(double t[], unsigned long t_us[], int s, int fs_max_gen)
{
    if (s == 1 && fs_max_gen == 1) // for dc (phase) control
    {
        t_us[0] = delay_mems;
        return;
    }

    for (int i = 0; i < fs_max_gen; i++)
    {
        t[i] = ((double)1.0/s)*(i+1);  // time unit is shifted for complete waveform generation (elimination of quantization error)
        t_us[i] = (int)(t[i]*1000000);
    }
}
static void sin_gen(int ch_p, double t[], unsigned long cmd_p[], unsigned long cmd_n[], int fs_max_gen, int freq, double phase, double volt, double offset)
{
    double v_p[fs_max_gen] = {0.0};
    double v_n[fs_max_gen] = {0.0};
    int v_d_p[fs_max_gen] = {0};
    int v_d_n[fs_max_gen] = {0};

    if (freq == 0)
    {
        v_p[0] = volt*sin(to_radian(phase))/2.0 + offset;
        v_d_p[0] = (int)(volt_res*v_p[0]/volt_max);
        cmd_p[0] = (ch_p << 16) | v_d_p[0];
        v_n[0] = volt*sin(to_radian(phase)+M_PI)/2.0 + offset;
        v_d_n[0] = (int)(volt_res*v_n[0]/volt_max);
        cmd_n[0] = ((ch_p+1) << 16) | v_d_n[0];
    }
    else
    {
        for (int i = 0; i < fs_max_gen; i++)
        {
            v_p[i] = volt*sin(2.0*M_PI*freq*t[i] + to_radian(phase))/2.0 + offset;
            v_d_p[i] = (int)(volt_res*v_p[i]/volt_max);
            cmd_p[i] = (ch_p << 16) | v_d_p[i];
        }
        for (int i = 0; i < fs_max_gen; i++)
        {
            v_n[i] = volt*sin(2.0*M_PI*freq*t[i] + to_radian(phase)+M_PI)/2.0 + offset;
            v_d_n[i] = (int)(volt_res*v_n[i]/volt_max);
            cmd_n[i] = ((ch_p+1) << 16) | v_d_n[i];
        }
    }
}

static void array_2d()
{
    unsigned long mcmd_xy_p[s_max_x+s_max_y][2] = {{0}};
    unsigned long mcmd_xy_n[s_max_x+s_max_y][2] = {{0}};

    for (int i=0; i<s_max_x; i++)
    {
        mcmd_xy_p[i][0] = t_us_x[i];
        mcmd_xy_p[i][1] = cmd_x_p[i];

        mcmd_xy_n[i][0] = t_us_x[i];
        mcmd_xy_n[i][1] = cmd_x_n[i];
    }

    for (int i=0; i<s_max_y; i++)
    {
        mcmd_xy_p[i+s_max_x][0] = t_us_y[i];
        mcmd_xy_p[i+s_max_x][1] = cmd_y_p[i];

        mcmd_xy_n[i+s_max_x][0] = t_us_y[i];
        mcmd_xy_n[i+s_max_x][1] = cmd_y_n[i];
    }

    std::qsort(mcmd_xy_p, s_max_x+s_max_y, sizeof(*mcmd_xy_p),
        [](const void *arg1, const void *arg2)->int // validation check needed
        {
            unsigned long const *lhs = static_cast<unsigned long  const*>(arg1);
            unsigned long  const *rhs = static_cast<unsigned long  const*>(arg2);
            return (lhs[0] < rhs[0]) ? -1
                :  ((rhs[0] < lhs[0]) ? 1
                :  (lhs[1] < rhs[1] ? -1
                :  ((rhs[1] < lhs[1] ? 1 : 0))));
        });

    std::qsort(mcmd_xy_n, s_max_x+s_max_y, sizeof(*mcmd_xy_n),
        [](const void *arg1, const void *arg2)->int // validation check needed
        {
            unsigned long const *lhs = static_cast<unsigned long  const*>(arg1);
            unsigned long  const *rhs = static_cast<unsigned long  const*>(arg2);
            return (lhs[0] < rhs[0]) ? -1
                :  ((rhs[0] < lhs[0]) ? 1
                :  (lhs[1] < rhs[1] ? -1
                :  ((rhs[1] < lhs[1] ? 1 : 0))));
        });

    for (int i=0; i<s_max_x+s_max_y; i++)
    {
        cmd_xy_p[i][0] = mcmd_xy_p[i][0];
        cmd_xy_p[i][1] = mcmd_xy_p[i][1];

        cmd_xy_n[i][0] = mcmd_xy_n[i][0];
        cmd_xy_n[i][1] = mcmd_xy_n[i][1];
    }
}


void wf_init()
{
    // signal generation for MEMS mirror protection
    int volt_x_init = 0;
    int volt_y_init = 0;
    unsigned long cmd_init_x_p = 0;
    unsigned long cmd_init_x_n = 0;
    unsigned long cmd_init_y_n = 0;
    unsigned long cmd_init_y_p = 0;

    if (enable_x == true)
    {
        volt_x_init = (int)(volt_res*volt_off_x/volt_max);
        cmd_init_x_p = (ch_x_p << 16) | volt_x_init;
        cmd_init_x_n = (ch_x_n << 16) | volt_x_init;
        writeBits(cmd_init_x_p);
        writeBits(cmd_init_x_n);
    }

    if (enable_y == true)
    {
        volt_y_init = (int)(volt_res*volt_off_y/volt_max);
        cmd_init_y_n = (ch_y_n << 16) | volt_y_init;
        cmd_init_y_p = (ch_y_p << 16) | volt_y_init;
        writeBits(cmd_init_y_n);
        writeBits(cmd_init_y_p);
    }

    // waveform generation ready
    s_x = s_gen(fs_max, freq_x);
    s_y = s_gen(fs_max, freq_y);
    gcd = fgcd(freq_x, freq_y);
    s_max_x = s_max_gen(s_x, gcd, enable_x);
    s_max_y = s_max_gen(s_y, gcd, enable_y);
    t_gen(t_x, t_us_x, s_x, s_max_x);
    t_gen(t_y, t_us_y, s_y, s_max_y);

    // should write code for waveform selection module here
    sin_gen(ch_x_p, t_x, cmd_x_p, cmd_x_n, s_max_x, freq_x, phase_x, volt_x, volt_off_x);
    sin_gen(ch_y_n, t_y, cmd_y_p, cmd_y_n, s_max_y, freq_y, phase_y, volt_y, volt_off_y);

    array_2d();
}

void wf_stop()
{
    int volt_x_stop[5] = {0};
    int volt_y_stop[5] = {0};
    unsigned long cmd_stop_x_p[5] = {0};
    unsigned long cmd_stop_x_n[5] = {0};
    unsigned long cmd_stop_y_n[5] = {0};
    unsigned long cmd_stop_y_p[5] = {0};

    for (int i=0; i<5; i++)
    {
        volt_x_stop[i] = (int)(volt_res*(volt_off_x/(1+i))/volt_max);
        volt_y_stop[i] = (int)(volt_res*(volt_off_y/(1+i))/volt_max);
    }

    for (int i=0; i<5; i++)
    {
        cmd_stop_x_p[i] = (ch_x_p << 16) | volt_x_stop[i];
        cmd_stop_x_n[i] = (ch_x_n << 16) | volt_x_stop[i];
        cmd_stop_y_n[i] = (ch_y_n << 16) | volt_y_stop[i];
        cmd_stop_y_p[i] = (ch_y_p << 16) | volt_y_stop[i];
    }

    for (int i=0; i<5; i++)
    {
        if (enable_x == true)
        {
            writeBits(cmd_stop_x_p[i]);
            writeBits(cmd_stop_x_n[i]);
        }
        if (enable_y == true)
        {
            writeBits(cmd_stop_y_n[i]);
            writeBits(cmd_stop_y_p[i]);
        }
        usleep(delay_mems);
    }
}


void wf_gen()
{
    while (1)
    {
        if (state == false)
        {
            return;
        }

        clock_t start = clock();

        for (int i=0; i < s_max_x+s_max_y; i++)
        {
            while (lapsed < cmd_xy_p[i][0]);
            writeBits(cmd_xy_p[i][1]);
            writeBits(cmd_xy_n[i][1]);
        }
    }
}

