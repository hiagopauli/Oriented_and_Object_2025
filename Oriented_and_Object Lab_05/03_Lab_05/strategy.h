#ifndef STRATEGY_H
#define STRATEGY_H

#include "game.h"
#include <iostream>
#include <string>

class Strategy : public Game
{
	public:
		Strategy(const std::string& title, double price);
		void description() const override;
		std::string getType() const override;
};

#endif
