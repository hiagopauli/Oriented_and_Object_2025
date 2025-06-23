#ifndef RPG_H
#define RPG_H

#include "game.h"

#include <string>
#include <iostream>

class Rpg : public Game
{
	public:
		Rpg(const std::string& title, double price);
		void description() const override;
		std::string getType() const override;
};


#endif
