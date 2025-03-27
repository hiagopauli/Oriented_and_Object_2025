#ifndef MAMMAL_H
#define MAMMAL_H

#include "animal.h"

class Mammal : public Animal
{
	protected:
		std::string mammalStatus;

	public:
		Mammal(const std::string& name);
		std::string getMammalStatus() const;
		std::string getInfo() const;
};

#endif


