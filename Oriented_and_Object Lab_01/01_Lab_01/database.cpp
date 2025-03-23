#include <iostream>
#include <string>
#include <vector>
#include "database.h"
#include "car.h"

//predefinied cars


void Database::InitCars()
{
	cars.emplace_back("Ford", "Mustang", 1965);
	cars.emplace_back("Audi", "Rs2", 1995);
	cars.emplace_back("Porsche", "911 - 901", 1964);
	cars.emplace_back("Audi", "A8 D3", 2008);
	cars.emplace_back("Bmw", "M3 e36", 1990);
}

std::string Database::DisplayAll() const
{
	std::string result = "\n";
	for (const auto& car : cars)
	{
		result += car.DisplayInfo() + "\n";
	}
	return result;
}

