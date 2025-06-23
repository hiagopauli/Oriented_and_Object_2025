#ifndef SPORT_H
#define SPORT_H

#include "game.h"
#include <iostream>
#include <string>

class Sport : public Game
{
	public:
		Sport(const std::string& title, double price);
		void description() const override;
		std::string getType() const override;
};

#endif
