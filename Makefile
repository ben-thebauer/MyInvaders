CFLAGS = -std=c11 -Wall -Wextra -Werror

Emulator: emulator.c

Disassembler: disassembler.c

clean: 
	rm Disassembler Emulator
