#include <iostream>
#include "amphibious.h"

Amphibious::Amphibious(const std::string& horsepower, const std::string& speed, const std::string& range_at_sea,
const std::string& speed_on_water, const std::string& water_or_land):

  Car(horsepower, speed),
  Boat(range_at_sea, speed_on_water),
	water_or_land(water_or_land)

{
}
const std::string& Amphibious::GetWaterOrLand() const
{
	return water_or_land;
}

//display

std::string Amphibious::DisplayInfo() const
{

	//display amphibious 
	std::cout << "Amphibious vehicle database: " 												<< std::endl;
	std::cout << "Horse Power: " << GetHorsePower() 										<< std::endl;
	std::cout << "Max Speed: " << GetSpeed() 														<< std::endl;
	std::cout << "Range at sea: " << GetRangeAtSea() 										<< std::endl;	
	std::cout << "Speed on water: " << GetSpeedOnWater() 								<< std::endl;
	std::cout << "Water or Land: " << GetWaterOrLand() 		 << std::endl << std::endl;

	return "displayed";
}


