#ifndef SPI_H
#define SPI_H



#include "/usr/include/wiringPi.h"


/* functions: SPI */
void writeBit(int);
void writeBits(unsigned long);
void spiInit();


#endif // SPI_H
