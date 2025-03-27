#include <iostream>
#include <string>
#include <vector>
#include "database.h"
#include "car.h"
#include "boat.h"

void Database::InitVehicle()
{
	vehicles.emplace_back("175hp", "160km/h", "40km", "50km/h", "Works on water and land");
	vehicles.emplace_back("43hp", "110km/h", "80km", "15km/h", "works on water and land");
	vehicles.emplace_back("600hp", "200km/h", "100km", "96km/h", "works on water and land");
}

std::string Database::DisplayAll() const
{
	std::string result = "\n";
	for (const auto& vehicle : vehicles)
	{
		result += vehicle.DisplayInfo() + "\n";
	}
	return result;
}


