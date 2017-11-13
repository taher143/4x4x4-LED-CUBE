/*
 * frames.h
 *
 * Created: 11/11/2017 2:22:02 PM
 *  Author: B2
 */ 


#ifndef FRAMES_H_
#define FRAMES_H_
#include <avr/pgmspace.h>

const unsigned char spinning_line[6][2] PROGMEM =
{
	{ 0x84, 0x21 },
	{ 0x0c, 0x30 },
	{ 0x03, 0xc0 },
	{ 0x12, 0x48 },
	{ 0x22, 0x44 },
	{ 0x44, 0x22 },
};




#endif /* FRAMES_H_ */