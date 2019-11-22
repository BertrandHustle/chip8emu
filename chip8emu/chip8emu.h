#pragma once

/*
0x000-0x1FF - Chip 8 interpreter (contains font set in emu)
0x050-0x0A0 - Used for the built in 4x5 pixel font set (0-F)
0x200-0xFFF - Program ROM and work RAM
*/

unsigned short opcode;
unsigned char memory[4096];
unsigned char cpuV[16];
// index register
unsigned short indexRegister;
// program counter, used to count cpu cycles
unsigned short programCounter;
// used to draw sprites to the screen
unsigned char gfx[64 * 32];
unsigned char delay_timer;
// buzzer sounds when this reaches 0
unsigned char soundTimer;
unsigned short stack[16];
unsigned short stackPointer;
unsigned char keypress[16];
