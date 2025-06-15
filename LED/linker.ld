ENTRY(_start)
SECTIONS
{
	. = 0x8000;
	.text	:	{ KEEP(*(.text.boot))	*(.text) }
	.data	:	{ *(.data) }
	.bss	:	{ *(.bss COMMON) }
	. = ALIGN(12);
}