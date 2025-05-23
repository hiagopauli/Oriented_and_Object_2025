#ifndef MAGE_H
#define MAGE_H

#include "hero.h"
#include <iostream>

class Mage : public Hero
{
	public:
		void attack() const override 
		{
			std::cout << "Attack using magic." << std::endl;
		}

		void showClass() const override
		{
			std::cout << "Class: Mage." << std::endl;
		}

};

#endif
