#include "gasringplanet.h"
#include <iostream>
#include <sstream>
#include <iomanip>

GasRingPlanet::GasRingPlanet(const std::string& name, double diameter,
														 double distanceFromSun, double gravity, 
														 bool hasWater, const std::string& dominantGas, 
														 const std::string& planetType, int ringCount):

	GasGiant(name, diameter, distanceFromSun, gravity, hasWater, dominantGas, planetType),
	ringCount(ringCount)
{
	if (ringCount < 0)
	{	
		throw std::invalid_argument("Cant have ring count negative.");
	}
}

int GasRingPlanet::getRingCount() const
{
	return ringCount;
}

void GasRingPlanet::explore(std::ostream& os) const
{
	GasGiant::explore(os);
	std::cout << "Number of rings: " << getRingCount() << "\n";
}

void GasRingPlanet::displayInfo(std::ostream& os) const
{
	GasGiant::displayInfo(os);
	os << "Ring count: " << getRingCount() << "\n";

}
/*
	os << std::fixed << std::setprevcision(2);
	os << "Gas Ring Planet: " 			<< getName() << "\n"
		 << "Diameter: " 							<< getDiameter() << "\n"
		 << "Distance from sun: " 		<< getDistance() << "millions km\n"
		 << "Gravity: " 							<< getGravity() << "m/sˆ2 \n"
		 << "Has Water: " 						<< (gethasWater() ? "Yes" : "No") << "\n"
		 << "Dominant Gas: " 					<< getDominantGas() << "\n"
		 << "Ring count: " 						<< getRingCount() << "\n";	
*/




