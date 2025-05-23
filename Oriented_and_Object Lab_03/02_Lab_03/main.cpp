#include <iostream>
#include <memory>
#include <string>
#include "factory.h"

int main()
{
	std::string input;
	std::cout << "Enter with type of character that you want create (warrior, ranger, mage): " << std::endl;
	std::cin >> input;

	std::unique_ptr<Hero> hero = Factory::createHero(input);
		
	if (hero)
	{
		hero->showClass();
		hero->attack();
	}
	else
	{
		std::cout << "Invalid type of character." << std::endl;
	}
	
	return EXIT_SUCCESS;

}		 
