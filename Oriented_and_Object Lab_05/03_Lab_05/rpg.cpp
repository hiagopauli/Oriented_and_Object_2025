#include "rpg.h"

Rpg::Rpg(const std::string& title, double price):
	Game(title, price)
{
}

void Rpg::description() const
{
	std::cout << "Game title: " << title << std::endl;
	std::cout << "Price in pln: " << price << std::endl;
	std::cout << "RPG - is a game which each participant assumes the role of a character that can interact whithin the game's world." << std::endl;
}

std::string Rpg::getType() const
{
	return "Rpg";

}

