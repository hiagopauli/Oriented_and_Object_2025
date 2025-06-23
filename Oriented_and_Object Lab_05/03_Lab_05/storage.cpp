#include "storage.h"
#include <iostream>

Storage::Storage()

{
	games.emplace_back(std::make_unique<Rpg>("The Witcher 3", 210.00));
  games.emplace_back(std::make_unique<Rpg>("Final Fantasy VII", 320.00));
  games.emplace_back(std::make_unique<Rpg>("Fallout 4", 185.50));
  games.emplace_back(std::make_unique<Rpg>("Skyrim", 59.99));

  games.emplace_back(std::make_unique<Strategy>("Age Of Empires 2", 39.45));
  games.emplace_back(std::make_unique<Strategy>("Warcraft 3", 50.00));

  games.emplace_back(std::make_unique<Sport>("Top Spin 2k25", 188.00));
  games.emplace_back(std::make_unique<Sport>("EA FC 25", 250.00));
  games.emplace_back(std::make_unique<Sport>("NBA 2k25", 120.00));

}


void Storage::showAll() const
{
	for (const auto& game : games)
	{
		game->description();
		std::cout << std::endl;
	}
}

void Storage::showByType(const std::string& type) const 
{
	for (const auto& game : games)
	{
		if (game->getType() == type)
		{
			game->description();
			std::cout << std::endl;
		}
	}
}
 
