#ifndef DIVIDER_H
#define DIVIDER_H

#include "input.h"

class Divider
{
	private:
		DivisionInput data;

	public:
		void readInput();
		int calculateRemainder();
};

#endif
