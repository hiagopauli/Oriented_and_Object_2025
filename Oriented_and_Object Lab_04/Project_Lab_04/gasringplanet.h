#ifndef GASRINGPLANET_H
#define GASRINGPLANET_H

#include "gasgiant.h"
#include <string>

class GasRingPlanet : public GasGiant
{
	private:
		int ringCount;
	
	public:
		GasRingPlanet(const std::string& name, double diameter, double distanceFromSun, 
									double gravity, bool hasWater, const std::string& dominantGas,
									const std::string& planetType, int ringCount);

		int getRingCount() const;
	
		void explore(std::ostream& os) const override;
		void displayInfo(std::ostream& os) const override;		
};

#endif
