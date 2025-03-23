#include <iostream>
#include <memory>
#include "database.h"
#include "car.h"


int main ()

{
	Database carDatabase;
	carDatabase.InitCars();
	std::cout << carDatabase.DisplayAll();
	
	return EXIT_SUCCESS;
}


