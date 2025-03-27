#include <iostream>
#include <memory>
#include "database.h"
#include "car.h"
#include "boat.h"

int main()
{
	Database vehicleDatabase;
	vehicleDatabase.InitVehicle();
	std::cout << vehicleDatabase.DisplayAll();
	
	return EXIT_SUCCESS;
}

