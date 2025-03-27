#include <iostream>
#include <string>
#include "boat.h"

//Implemenation 

Boat::Boat (const std::string& range_at_sea, const std::string& speed_on_water):
	range_at_sea(range_at_sea),
	speed_on_water(speed_on_water)

{
}

const std::string& Boat::GetRangeAtSea() const
{
	return range_at_sea;
}

const std::string& Boat::GetSpeedOnWater() const
{
	return speed_on_water;
}

//Display

std::string Boat::DisplayInfo() const

{
	std::string result;
	std::cout << "Boat Database: " << std::endl;
	std::cout << "Range At Sea: " << range_at_sea << std::endl;
	std::cout << "Speed On Water: " << speed_on_water << std::endl;

	return result;
}

