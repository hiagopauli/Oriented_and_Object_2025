#include "game.h"
#include "rpg.h"
#include "strategy.h"
#include "sport.h"
#include "storage.h"

#include <iostream>
#include <limits>
#include <cstdlib>

int main()
{
	Storage storage;
	int choice = 0;
	
	while (choice != 5)
	{
		std::cout << "--------------------" 				<< std::endl;
		std::cout << "Storage menu." 								<< std::endl;
		std::cout << "[1] Print all games." 				<< std::endl;
		std::cout << "[2] Print rpg games." 				<< std::endl;
		std::cout << "[3] Print strategy games." 		<< std::endl;
		std::cout << "[4] Print sport games." 			<< std::endl;
		std::cout << "[5] Close program." 					<< std::endl;
		std::cout << "Enter with your decision." 		<< std::endl;
		std::cin >> choice;
		
		if (choice == 1)
		{
			storage.showAll();	
		}
		else if (choice == 2)
		{
			storage.showByType("Rpg");
		}
		else if (choice == 3)
		{
			storage.showByType("Strategy");
		}
		else if (choice == 4)
		{
			storage.showByType("Sport");
		}
		else if (choice == 5)
		{
			std::cout << "Closed." << std::endl;
		}
		else 
		{
			std::cout << "Invalid command." << std::endl;
		}
	}		

return EXIT_SUCCESS;
}

