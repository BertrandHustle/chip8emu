#include "cpu.h"

// emulates a single cpu cycle
void cpu::emulateCycle(short programCounter) {
	// OR two bits together to get 1 opcode
	opcode = memory[programCounter] << 8 | memory[programCounter + 1]

}

unsigned short cpu::executeOpcode(unsigned short opcode) {
	// ANDs so we only have first 4 bits
	switch(opcode & 0xF000){
		case 0xA2F0
	}

}