/*
  RSCG12864B.h - 12864LCD library for Arduino & Wiring
  Copyright (c) 2015 Raylid Electronics Co.,Ltd (www.raylid.com).  All right reserved.
*/

#ifndef RSCG12864B_h
#define RSCG12864B_h

#include "Wire.h"
#include <Arduino.h>

typedef unsigned char U8;
typedef unsigned int U16;
typedef unsigned long U32;
typedef const char  CCHAR;

#define SMALL 		1
#define NORMAL 		2
#define BIG 		3
#define LARGE 		4
#define VLARGE 		5

class RAYLIDLCD 
{
	private:
	U16 _BUSYPIN;
	
	public:
	RAYLIDLCD(U16 BUSYPIN);
	void begin();
	void clear();
	void displayOn();
	void displayOff();
	void setBrightness(U8 n);
	void drawPixel(U8 x,U8 y);
	void deletePixel(U8 x,U8 y);
	void drawLine(U8 x1,U8 y1,U8 x2,U8 y2);
	void deleteLine(U8 x1,U8 y1,U8 x2,U8 y2);
	void drawRect(U8 x1,U8 y1,U8 x2,U8 y2);
	void deleteRect(U8 x1,U8 y1,U8 x2,U8 y2);
	void drawRectF(U8 x1,U8 y1,U8 x2,U8 y2);
	void deleteRectF(U8 x1,U8 y1,U8 x2,U8 y2);
	void drawCircle(U8 x,U8 y,U8 r);
	void deleteCircle(U8 x,U8 y,U8 r);
	void drawCircleF(U8 x,U8 y,U8 r);
	void deleteCircleF(U8 x,U8 y,U8 r);
	void inverselyArea(U8 x1,U8 y1,U8 x2,U8 y2);
	void displayBMP(U16 n);
	void displayBMPB(U16 n,U8 px,U8 py,U8 x,U8 y,U8 w,U8 h);
	void cursor(U8 x,U8 y);
    void spacing(U8 xs,U8 ys);
	void fontReversOn();
	void fontReversOff();
	void print(U8 x, U8 y, CCHAR *ptr, U16 font);
	void write(U8 x, U8 y, U32 n, U16 font);
};

#endif
