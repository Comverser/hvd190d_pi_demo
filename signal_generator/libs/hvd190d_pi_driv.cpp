#include "hvd190d_pi_driv.h" // <iostream>

#include <wiringPi.h>

namespace hvd190d_pi
{
    // private
    enum pin_spi { din = 10, sclk = 11, sync = 8 };
    enum pin_trig { x = 20, y = 21 };
    enum pin_misc { hv = 16 };

    static void write_bit(int bit)
    { 
        digitalWrite(sclk, 1);
        digitalWrite(din, bit);
        digitalWrite(sclk, 0);
    }

    static void setup_pi()
    {
        wiringPiSetupGpio();
        pinMode(din, OUTPUT);
        pinMode(sclk, OUTPUT);
        pinMode(sync, OUTPUT);
        pinMode(x, OUTPUT);
        pinMode(y, OUTPUT);
        pinMode(hv, OUTPUT);
    }

    static void setup_dac()
    {
        write_spi(0x280001); // full reset
        write_spi(0x20000F); // power-down mode: all DAC channels power-up
    }

    static void power_down_dac()
    {
        write_spi(0x20001F); // power-down mode: 1 kohm to GND
    }

    static void enable_hv()
    {
        digitalWrite(hv, 1);
    }

    static void disable_hv()
    {
        digitalWrite(hv, 0);
    }
    
    // public
    clock_t t_start = 0;
    clock_t t_start_ = 0;

    void t_reset()
    {
        t_start = clock();
    }

    void t_reset_()
    {
        t_start_ = clock();
    }

    void write_spi(unsigned long bits)
    { 
        digitalWrite(sync, 0);
        for (int i = 0; i < 24; i++) 
        {
            write_bit((bits >> (23 - i)) & 0x01); 
        }
        digitalWrite(sync, 1);
    }

    void write_spi(unsigned long bits_p, unsigned long bits_n)
    { 
        digitalWrite(sync, 0);
        for (int i = 0; i < 24; i++) 
        {
            write_bit((bits_p >> (23 - i)) & 0x01); 
        }
        digitalWrite(sync, 1);
        digitalWrite(sync, 0);
        for (int i = 0; i < 24; i++) 
        {
            write_bit((bits_n >> (23 - i)) & 0x01); 
        }
        digitalWrite(sync, 1);
    }

    void write_spi(int ch, unsigned long v_digital)
    {
        write_spi(convert_to_spi(ch, v_digital));
    }

    void write_spi(int ch_p, unsigned long v_digital_p, int ch_n, unsigned long v_digital_n)
    {
        write_spi(convert_to_spi(ch_p, v_digital_p));
        write_spi(convert_to_spi(ch_n, v_digital_n));
    }

    void write_spi_all(unsigned long v_digital)
    {
        write_spi(7, v_digital);
    }

    void write_trig_x(int signal)
    {
        digitalWrite(x, signal);
    }

    void write_trig_y(int signal)
    {
        digitalWrite(y, signal);
    }

    unsigned long convert_v_norm_to_v_d(double v_d_norm, int v_res)
    {
        v_res = v_res - 1;
        return (int)( v_res * v_d_norm );
    }

    void hold(double v_d_norm)
    {
        write_spi_all(convert_v_norm_to_v_d(v_d_norm));
    }

    void initialize(double v_d_norm)
    {
        setup_pi();
        setup_dac();
        hold(v_d_norm);
        enable_hv();
    }

    void terminate(double v_d_norm)
    {
        hold(v_d_norm);
        disable_hv();
//        power_down_dac();
    }

}
