#ifndef WARRIOR_H
#define WARRIOR_H

#include "hero.h"
#include <iostream>

class Warrior : public Hero
{
	public:
		void attack() const override
		{
			std::cout << "Attack by physical strikes." << std::endl;
		}
	
		void showClass() const override
		{
			std::cout << "Class: warrior." << std::endl;
		}

};

#endif
