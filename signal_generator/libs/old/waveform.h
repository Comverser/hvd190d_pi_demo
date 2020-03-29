#ifndef WAVEFORM_H
#define WAVEFORM_H



#include <cmath>
#include "spi.h"
#include "hvd190.h"
#include "mainwindow.h" // for use of 'state' variable
#include <unistd.h> // for use of usleep function

#define fs_max 25000

/* variables: waveform conditions */
extern bool enable_x;
extern bool enable_y;
//extern int waveform_x;
//extern int waveform_y;
extern int freq_x;
extern int freq_y;
extern double volt_x;
extern double volt_y;
extern double volt_off_x;
extern double volt_off_y;
extern double phase_x;
extern double phase_y;

void wf_init();
void wf_stop();
void wf_gen();


#endif // WAVEFORM_H
