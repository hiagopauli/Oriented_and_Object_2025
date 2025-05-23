#ifndef RANGER_H
#define RANGER_H

#include "hero.h"
#include <iostream>

class Ranger : public Hero
{
	public:
		void attack() const override
		{
			std::cout << "Attack by distance." << std::endl;
		}

		void showClass() const override
		{
			std::cout << "Class: Ranger." << std::endl;
		}

};

#endif
