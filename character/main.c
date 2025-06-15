#include "hwio.h"
#include "mailbox.h"
#include "drawing.h"

#define WIDTH  1024
#define HEIGHT 768

void main() {
	mailbox_fb_init(WIDTH, HEIGHT);
	drawCharacter('H', 80, 160);
	drawCharacter('E', 88, 160);
	drawCharacter('L', 96, 160);
	drawCharacter('L', 104, 160);
	drawCharacter('O', 112, 160);
	drawCharacter(',', 120, 160);
	drawCharacter('W', 128, 160);
	drawCharacter('O', 136, 160);
	drawCharacter('R', 144, 160);
	drawCharacter('L', 152, 160);
	drawCharacter('D', 160, 160);
	drawCharacter('!', 168, 160);
}

