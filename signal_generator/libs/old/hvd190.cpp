#include "hvd190.h"

static const int enable = 16; //22; //hvd190d v2.0
const int ch_x_p = 16;  const int ch_x_n = 17;
const int ch_y_n = 18;  const int ch_y_p = 19;

void init_driv()
{
    pinMode(enable, OUTPUT);
    writeBits(0x280001);
    writeBits(0x380000);
    writeBits(0x20000F);
    writeBits(0x300000);

    //writeBits(0b000101110110011001100110); // 80V offset hvd190d v2.0
}

/*
void close_driv()
{
    writeBits(0x1F8000);
    writeBits(0x1F0000);
}
*/

void hv_state(bool state)
{
    if (state == true)
    {
        digitalWrite(enable, 1); delay(500);
    }
    else if (state == false)
    {
        digitalWrite(enable, 0); delay(500);
    }
}
