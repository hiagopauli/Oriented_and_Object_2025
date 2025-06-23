#include "sport.h"

Sport::Sport(const std::string& title, double price):
	Game(title, price)
{
}

void Sport::description() const
{
	std::cout << "Game title: " << title << std::endl;
	std::cout << "Price in pln: " << price << std::endl;
	std::cout << "Competitive game which involve single or multiplayer competitions, simulating a real life sport, following the real rule on the goal to win agains someone or a team." << std::endl;
}

std::string Sport::getType() const
{
	return "Sport";
}

