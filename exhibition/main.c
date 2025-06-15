#include "hwio.h"
#include "mailbox.h"
#include "drawing.h"

#define WIDTH  1024
#define HEIGHT 768

void main() {
	mailbox_fb_init(WIDTH, HEIGHT);
	uint16_t colorC = 0xFFFF;
	uint16_t colorB = 0x0000;

	uint16_t *buf = (uint16_t *)VcToArm(mailbox_fb_ptr());
		for(int y = 0; y < HEIGHT; y++) {
			for(int x = 0; x < WIDTH; x++) {
				buf[x + y * WIDTH] = x ^ y;
			}
		}

	while(1) {
		ColorSt("Hello,Wold!\nRaspberry pi3 model B", 450, 300, colorC);
		ColorCh('W', 80, 450, colorB);
		ColorCh('e', 140, 450, colorC);
		ColorCh('l', 200, 450, colorB);
		ColorCh('c', 260, 450, colorC);
		ColorCh('o', 320, 450, colorB);
		ColorCh('m', 380, 450, colorC);
		ColorCh('e', 440, 450, colorB);
		colorC--;
		colorB++;
	}
}

