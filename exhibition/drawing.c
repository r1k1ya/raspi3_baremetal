#include "drawing.h"
#include "font.h"
#include "mailbox.h"

void drawCharacter(char ch, int x, int y) {
	uint16_t onechar;
	int test;
	for(int i = 0; i < 16; i++) {
		onechar = font[ch][i];
		for(int j = 7; j >= 0; j--) {
			onechar = onechar << 1;
			test = onechar & 0x100;
			if(test != 0) {
				mailbox_fb_set_pixel(0xFFFF, x + j, y);
			}
		}
		y++;
	}
}

void ColorCh(char ch, int x, int y, uint16_t color) {
	uint16_t onechar;
	int test;
	for(int i = 0; i < 16; i++) {
		onechar = font[ch][i];
		for(int j = 7; j >= 0; j--) {
			onechar = onechar << 1;
			test = onechar & 0x100;
			if(test != 0) {
				mailbox_fb_set_pixel(color, x + j, y);
			}
		}
		y++;
	}
}

void drawString(char str[], int x, int y) {
	int i = 0;
	int x1 = x;
	//int width = 80;
	//int height = 160;
	while(str[i] != '\0') {
		if(str[i] == '\n') {
			y += 16;
			x = x1;
		} else {
			drawCharacter(str[i], x, y);
			x += 8;
		}
		i++;
	}
}

void ColorSt(char str[], int x, int y, uint16_t color) {
	int i = 0;
	int x1 = x;
	//int width = 80;
	//int height = 160;
	while(str[i] != '\0') {
		if(str[i] == '\n') {
			y += 16;
			x = x1;
		} else {
			ColorCh(str[i], x, y, color);
			x += 8;
		}
		i++;
	}
}