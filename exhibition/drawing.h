#ifndef _DRAWING_H_
#define _DRAWING_H_

#include <stdint.h>

void drawCharacter(char ch, int x, int y);
void ColorCh(char ch, int x, int y, uint16_t color);
void drawString(char str[], int x, int y);
void ColorSt(char str[], int x, int y, uint16_t color);
#endif