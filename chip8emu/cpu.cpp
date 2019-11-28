#include "cpu.h"

// emulates a single cpu cycle
void cpu::emulateCycle(short programCounter) {
	// OR two bits together to get 1 opcode
	opcode = memory[programCounter] << 8 | memory[programCounter + 1];

};

unsigned short cpu::executeOpcode(unsigned short opcode) {
	// ANDs so we only have first 4 bits. e.g. 1010 000000000000
	switch (opcode & 0xF000) {

		// ANNN: Set indexRegister to address NNN ('N' is a stand-in for any byte)
		case 0xA000: 
				indexRegister = opcode & 0x0FFF; 
				programCounter += 2;

		default: break;

	};
	return 0;
}