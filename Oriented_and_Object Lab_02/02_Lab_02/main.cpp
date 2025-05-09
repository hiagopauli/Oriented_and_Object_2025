#include <iostream>
#include "rent.h"
#include "car.h"
#include "motorcycle.h"
#include "bicycle.h"

int main()

{
	int choice, days;
	std::cout << "_______________" 																				<< std::endl;
	std::cout << "Press 1 for calculate the rent of a car." 							<< std::endl;
	std::cout << "Press 2 for calculate the rent of a motorcycle." 				<< std::endl;
	std::cout << "Press 3 for calculate the rent of a bicycle."	 	  			<< std::endl;
	std::cin  >> choice;
	  
	if (std::cin.fail () || choice < 1 || choice > 3)
	{
		std::cout << "Invalid option." << std::endl;
		return EXIT_FAILURE;
	}
	
	std::cout << "_______________" 									 	       << std::endl << std::endl;
	std::cout << "How many days rented or will rent: "              << std::endl;
	std::cin  >> days;


	if (choice == 1)
	{ 
		Car myCar(days);
		std::cout << "The price for rent a car per day is 80.00 dolars." 							<< std::endl;
		std::cout << "Total pay for car rent: " << myCar.calculateDay() << " dolars"  << std::endl;
	}
	
	else if (choice == 2)
	{
		Motorcycle myMotorcycle(days);
		std::cout << "The price for rent a motorcycle per day is 50.00 dolars."											<< std::endl;
		std::cout << "Total pay for motorcycle rent: " << myMotorcycle.calculateDay() << " dolars"  << std::endl;
	}
	
	else if  (choice == 3)
	{
		Bicycle myBicycle(days);
		std::cout << "The price for rent a bicycle per day is 20.00 dolars." 								 << std::endl;
		std::cout << "Total pay for bicycle rent: " << myBicycle.calculateDay() << " dolars" << std::endl;
	}
	
	return EXIT_SUCCESS;
}	
