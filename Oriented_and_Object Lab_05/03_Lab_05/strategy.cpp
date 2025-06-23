#include "strategy.h"

Strategy::Strategy(const std::string& title, double price):
	Game(title, price)
{
}

void Strategy::description() const
{
	std::cout << "Game title: " << title << std::endl;
	std::cout << "Price in pln: " << price << std::endl;
	std::cout << "Strategy game prioritize tactical gameplay, competition, quick reaction, management and execution over luck." << std::endl;
}
std::string Strategy::getType() const
{
	return "Strategy";
}
