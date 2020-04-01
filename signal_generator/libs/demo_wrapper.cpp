#include "demo_wrapper.h"
#include "hvd190d_pi_wf.h" // "koc_wf_gen.h": <vector>
#include "hvd190d_pi_driv.h" // <iostream>

#define FS_MAX 8192

//////////////////// Private

static hvd190d_pi::wf wf_main;

//////////////////// Public (in order)

std::atomic<bool> state(false);

void demo_init(double v_d_norm)
{
    hvd190d_pi::initialize(v_d_norm);

    wf_main.set_is_diff_on(true);
}

void demo_is_x_on(bool flag)
{
    wf_main.set_is_x_on(flag);
}

void demo_is_y_on(bool flag)
{
    wf_main.set_is_y_on(flag);
}

void demo_wf_set_x(int p_waveform_mode, double p_freq, double p_amp, double p_offset, double p_phase)
{
    const int m_xy = 0;
    const int m_fs_max = FS_MAX;
    const double m_fc = 10000.0;
    const double m_pulse_width = 0;

    wf_main.set_param_wf(m_xy, m_fs_max, m_fc, p_waveform_mode, p_freq, p_amp, p_offset, p_phase, m_pulse_width);
}

void demo_wf_set_y(int p_waveform_mode, double p_freq, double p_amp, double p_offset, double p_phase)
{
    const int m_xy = 1;
    const int m_fs_max = FS_MAX;
    const double m_fc = 10000.0;
    const double m_pulse_width = 0;

    wf_main.set_param_wf(m_xy, m_fs_max, m_fc, p_waveform_mode, p_freq, p_amp, p_offset, p_phase, m_pulse_width);
}

void demo_wf_gen()
{
	wf_main.run_wf_differential();
}

void demo_run()
{ 
    std::vector<unsigned int> t_us;
    std::vector<unsigned int> cmd_wf_p;
    std::vector<unsigned int> cmd_wf_n;

    t_us = wf_main._sorted_cmd_wf.t_us;
    cmd_wf_p = wf_main._sorted_cmd_wf.cmd_wf_p;
    cmd_wf_n = wf_main._sorted_cmd_wf.cmd_wf_n;

    while(state)
    {
        hvd190d_pi::t_reset(); // take A
        for (unsigned int i = 0; i < t_us.size(); i++ ) // take B, A + B = ~ 1.2 us
        {
            while ( hvd190d_pi::t_lapsed() < t_us[i] ); // take ~1.4 us
            hvd190d_pi::write_spi(cmd_wf_p[i], cmd_wf_n[i]);
        }
    }
}


void demo_hold(double v_d_norm)
{
    hvd190d_pi::hold(v_d_norm);
}

void demo_terminate(double v_d_norm)
{
    hvd190d_pi::terminate(v_d_norm);
}
