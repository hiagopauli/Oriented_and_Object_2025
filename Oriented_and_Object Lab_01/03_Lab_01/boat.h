#ifndef BOAT_H
#define BOAT_H

#include <string>

class Boat
{
	private:
		std::string range_at_sea;
		std::string speed_on_water;

	public:
		Boat( const std::string& range_at_sea, const std::string& speed_on_water);

		const std::string& GetRangeAtSea()  const;
		const std::string& GetSpeedOnWater()   const;

		std::string DisplayInfo() const;

};

#endif
