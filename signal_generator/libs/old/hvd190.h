#ifndef HVD190_H
#define HVD190_H



#include <iostream>

#include "spi.h"

#define volt_max_driv 190.0
#define delay_mems 50000

#define lapsed (((clock() - start) / (float)CLOCKS_PER_SEC) * 1000000)
#define lapsed_x (((clock() - start_x) / (float)CLOCKS_PER_SEC) * 1000000)
#define lapsed_y (((clock() - start_y) / (float)CLOCKS_PER_SEC) * 1000000)

extern const int ch_x_p;    extern const int ch_x_n;
extern const int ch_y_n;    extern const int ch_y_p;

void init_driv();
//void close_driv(); // verification of this function needed
void hv_state(bool);

#endif // HVD190_H
