#ifndef HVD190D_PI_DRIV_H
#define HVD190D_PI_DRIV_H

#include <iostream> // for the inline functions

namespace hvd190d_pi
{
    extern clock_t t_start;
    extern clock_t t_start_;

    inline int t_lapsed()
    {
        return clock() - t_start;
//        return (((clock() - t_start) / (float)CLOCKS_PER_SEC) * 1000000);
    }

    inline int t_lapsed_()
    {
        return clock() - t_start_;
    }

    inline unsigned long convert_to_spi(int ch, unsigned long v_digital)
    {
        return 0x180000 | ( ( (0x000000 | (ch)) << 16) | v_digital); 
    }

    void t_reset();
    void t_reset_();
    void write_spi(unsigned long bits);
    void write_spi(unsigned long bits_p, unsigned long bits_n);
    void write_spi(int ch, unsigned long v_digital);
    void write_spi(int ch_p, unsigned long v_digital_p, int ch_n, unsigned long v_digital_n);
    void write_spi_all(unsigned long v_digital);
    void write_trig_x(int signal);
    void write_trig_y(int signal);

    unsigned long convert_v_norm_to_v_d(double v_d_norm, int v_res = 65536);
    void hold(double v_d_norm = 0.0);
    void initialize(double v_d_norm = 0.0);
    void terminate(double v_d_norm = 0.0);
}

#endif
