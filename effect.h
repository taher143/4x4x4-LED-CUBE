/*
 * effect.h
 *
 * Created: 11/11/2017 12:33:38 PM
 *  Author: B2
 */ 


#ifndef EFFECT_H_
#define EFFECT_H_

#include "draw.h"

//Function Decleration
void effect_spiral(int direction, int iterations, int delay);
void effect_spinning_plane(int direction, int iterations, int delay);
void effect_rain (int iterations, int delay, int hold, int speed);
void sendvoxel_z (unsigned char x, unsigned char y, unsigned char z, int delay);
void sendplane_rand_z (unsigned char z, int delay, int wait);
void blinky(void);
void flyplane (unsigned char plane,unsigned char direction, int delay);
void loadbar(int delay);
void random_1 (int iterations, int voxels, int delay);
void random_2 (void);
void random_filler (int iterations, int pixels, int delay, int state);
void random_filler2 (int delay, int state);
void planeflip (unsigned char axis1, int pos1, unsigned char axis2, int pos2, int delay);
void flip_playback (int delay, unsigned char flip_x, unsigned char flip_y, unsigned char flip_z);
void boingboing (uint16_t iterations, int delay, unsigned char mode, unsigned char drawmode);
void delay_ms (uint16_t x); // delay function used throughout the program
void blinky2(void);
void sendvoxels_rand_z (int, int, int);

#endif /* EFFECT_H_ */