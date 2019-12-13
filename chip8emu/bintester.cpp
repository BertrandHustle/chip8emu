#include "Bintester.h"
#include <iostream>

unsigned short Bintester::bintest(unsigned short bin1, unsigned short bin2, char op) {
	switch (op) {
		case '&': return bin1 & bin2;
		default: return 0;
	};
};