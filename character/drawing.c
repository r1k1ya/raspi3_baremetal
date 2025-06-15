#include "mailbox.h"
#include "font.h"

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