/*
 * Copyright (C) 2018 bzt (bztsrc@github)
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
#include <stdint.h>

#define IO_WRITE(reg, val)                                    (*(volatile uint32_t *)((uint32_t)(reg)) = (uint32_t)val)

#define MMIO_BASE       0x3F000000

#define GPIO_BASE                                             (MMIO_BASE + 0x200000)
#define GPIO_SEL0                                             (GPIO_BASE + (4 * 0))
#define GPIO_SEL1                                             (GPIO_BASE + (4 * 1))
#define GPIO_SEL2                                             (GPIO_BASE + (4 * 2))
#define GPIO_SEL3                                             (GPIO_BASE + (4 * 3))
#define GPIO_SEL4                                             (GPIO_BASE + (4 * 4))
#define GPIO_SEL5                                             (GPIO_BASE + (4 * 5))
#define GPIO_SET0                                             (GPIO_BASE + 0x1C)
#define GPIO_SET1                                             (GPIO_BASE + 0x20)
#define GPIO_CLR0                                             (GPIO_BASE + 0x28)
#define GPIO_CLR1                                             (GPIO_BASE + 0x2C)
#define GPIO_LEV0                                             (GPIO_BASE + 0x34)
#define GPIO_LEV1                                             (GPIO_BASE + 0x38)
#define GPIO_GPPUD                                            (GPIO_BASE + 0x94)
#define GPIO_GPPUDCLK0                                        (GPIO_BASE + 0x98)
