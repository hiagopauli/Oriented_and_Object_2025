#ifndef AMPHIBIOUS_H
#define AMPHIBIOUS_H

#include "car.h"
#include "boat.h"

class Amphibious : public Car, public Boat
{
	private:
		std::string water_or_land;

	public:
		Amphibious(const std::string& horsepower, const std::string& speed, 
const std::string& range_at_sea, const std::string& speed_on_water,
 const std::string& water_or_land);

		const std::string& GetWaterOrLand() const;

		std::string DisplayInfo() const;

};

#endif


