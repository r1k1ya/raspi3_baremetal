ARMGNU ?= arm-none-eabi

TARGET = kernel.img

LINKER = memorymap.ld

SRC = $(wildcard *.c)

SRO = $(wildcard *.s)

OBJECTS = $(SRO:%.s=%.o)

GCC := $(SRC:%.c=%.o)

all: $(TARGET)

$(TARGET): kernel.elf
	$(ARMGNU)-objcopy -O binary kernel.elf $(TARGET) 
	
kernel.elf: $(OBJECTS) $(GCC) $(LINKER)
	$(ARMGNU)-ld -T $(LINKER) *.o -o kernel.elf

# .c.o:ターゲットは.oというファイルが必要になれば、これを.cから作るというルール。
# すべての依存するファイル名は.cだから{$^}、ターゲットファイル名は.oだから{$@}

.c.o:
	$(ARMGNU)-gcc -c -mcpu=cortex-a53 -g $^ -o $@

%.o: %.s
	$(ARMGNU)-as -mcpu=cortex-a53 -mfpu=vfpv3 $^ -o $@
	
