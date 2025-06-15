.section ".text.boot"

.global _start
_start:
	// Initialization of stack pointer (sp)
	MOV sp, #0x8000

	// entry main func
	BL main
	B .
