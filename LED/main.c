#include "gpio.h"

int main()
{
	IO_WRITE(GPIO_SEL1, (UINT32_C(1) << 18));
	IO_WRITE(GPIO_SET0, (UINT32_C(1) << 16));
}