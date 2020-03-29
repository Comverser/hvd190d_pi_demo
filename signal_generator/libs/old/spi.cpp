#include "spi.h"

/* variables: SPI pin mapping */
static const int sdiPin = 10;
static const int sclkPin = 11;
static const int syncPin = 8;

/* functions: SPI */
void writeBit(int bit)
{
    digitalWrite(sclkPin, 1);
    digitalWrite(sdiPin, bit);
    digitalWrite(sclkPin, 0);
}

void writeBits(unsigned long bits)
{
    digitalWrite(syncPin, 0);
    for(int i = 0; i < 24; i++)
        writeBit((bits >> (23 - i)) & 0x01);
    digitalWrite(syncPin, 1);
}

void spiInit()
{
    wiringPiSetupGpio();
    pinMode(sdiPin, OUTPUT);
    pinMode(sclkPin, OUTPUT);
    pinMode(syncPin, OUTPUT);
}

