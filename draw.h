/*
 * draw.h
 *
 * Created: 11/11/2017 12:30:30 PM
 *  Author: B2
 */ 


#ifndef DRAW_H_
#define DRAW_H_

//Function Decleration. 
void setvoxel(int x, int y, int z);
void clrvoxel(int x, int y, int z);
unsigned char getvoxel(int x, int y, int z);
unsigned char inrange(int x, int y, int z);
void flpvoxel(int x, int y, int z);
void altervoxel(int x, int y, int z, int state);
void setplane_z(int z);
void clrplane_z(int z);
void setplane_x(int x);
void clrplane_x(int x);
void setplane_y(int y);
void clrplane_y(int y);
void setplane(unsigned char plane, int i, int state);
void setline_z(int x, int y, int z1, int z2);
void setline_x(int z, int y, int x1, int x2);
void setline_y(int z, int x, int y1, int y2);
void clrline_z(int x, int y, int z1, int z2);
void clrline_x(int z, int y, int x1, int x2);
void clrline_y(int z, int x, int y1, int y2);
void drawline_plane(int x2, int y2, int x1, int y1,unsigned char anchor);
void fill (unsigned char pattern);
void tmp2cube(void);
void cube2tmp(void);

// *** Cube buffer ***
// The 3D image displayed on the cube is buffered in a 2d array 'cube'.
// The 1st dimension in this array is the Z axis of the cube.
// The 2nd dimension of the array is the Y axis.
// Each byte is a stripe of leds running along the X axis at the given
// Z and Y coordinates.
// Only the 4 lower bits are used, since the cube is only 4x4x4.
// This buffer design was chosen to have code compatability with a 8x8x8 cube.
// "volatile" makes the variables reachable from within the interrupt functions
volatile unsigned char cube[4][4];

// We sometimes want to draw into a temporary buffer so we can modify it
// before writing it to the cube buffer.
// e.g. invert, flip, reverse the cube..
volatile unsigned char tmpcube[4][4];

// What layer the interrupt routine is currently showing.
volatile unsigned char current_layer;


#endif /* DRAW_H_ */