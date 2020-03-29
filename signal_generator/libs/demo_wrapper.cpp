#include "demo_wrapper.h"
#include "hvd190d_pi_wf.h" // "koc_wf_gen.h": <vector>
#include "hvd190d_pi_driv.h" // <iostream>

//////////////////// Private
//
struct buffer
{
    std::vector<unsigned long> t_us;
    std::vector<unsigned long> cmd_wf_p;
    std::vector<unsigned long> cmd_wf_n;
};

static hvd190d_pi::wf wf_main;
static buffer wf_buf;

void driv(buffer wf)
{
    hvd190d_pi::t_reset(); // take A
    for (int i = 0; i < wf.t_us.size(); i++ ) // take B, A + B = ~ 1.2 us 
    {
        while ( hvd190d_pi::t_lapsed() < wf.t_us[i] ); // take ~1.4 us
        hvd190d_pi::write_spi(wf.cmd_wf_p[i], wf.cmd_wf_n[i]);
    }
}

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
    const int m_fs_max = 8000;
    const double m_fc = 10000.0;
    const double m_pulse_width = 0;

    wf_main.set_param_wf(m_xy, m_fs_max, m_fc, p_waveform_mode, p_freq, p_amp, p_offset, p_phase, m_pulse_width);
}

void demo_wf_set_y(int p_waveform_mode, double p_freq, double p_amp, double p_offset, double p_phase)
{
    const int m_xy = 1;
    const int m_fs_max = 8000;
    const double m_fc = 10000.0;
    const double m_pulse_width = 0;

    wf_main.set_param_wf(m_xy, m_fs_max, m_fc, p_waveform_mode, p_freq, p_amp, p_offset, p_phase, m_pulse_width);
}

void demo_wf_gen()
{
	wf_main.run_wf_differential();

	wf_buf.t_us = wf_main._sorted_cmd_wf.t_us;
	wf_buf.cmd_wf_p = wf_main._sorted_cmd_wf.cmd_wf_p;
	wf_buf.cmd_wf_n = wf_main._sorted_cmd_wf.cmd_wf_n;
}

void demo_run()
{
    while(state)
    {
        driv(wf_buf);
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
