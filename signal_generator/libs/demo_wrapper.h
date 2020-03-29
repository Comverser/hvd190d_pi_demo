#ifndef DEMO_WRAPPER_H
#define DEMO_WRAPPER_H

#include <atomic>

//////////////////// in order
extern std::atomic<bool> state;

void demo_init(double v_d_norm = 0.0);
void demo_is_x_on(bool flag);
void demo_is_y_on(bool flag);
void demo_wf_set_x(int p_waveform_mode, double p_freq, double p_amp, double p_offset, double p_phase);
void demo_wf_set_y(int p_waveform_mode, double p_freq, double p_amp, double p_offset, double p_phase);
void demo_wf_gen();
void demo_run();
void demo_hold(double v_d_norm); // This parameter must be set carefully
void demo_terminate(double v_d_norm = 0.0);

#endif
