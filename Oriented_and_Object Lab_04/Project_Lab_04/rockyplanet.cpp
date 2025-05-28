#include <sstream>
#include <iomanip>
#include <iostream>
#include "rockyplanet.h"

RockyPlanet::RockyPlanet(const std::string& name, double diameter,
												 double distanceFromSun, double gravity, bool hasWater,
												 const std::string& crust, const std::string& core):

	Planet(name, diameter, distanceFromSun, gravity, hasWater),
	crustComposition(crust),	
	coreComposition(core)

{
}

void RockyPlanet::displayInfo(std::ostream& os) const
{
	Planet::displayInfo(os);
	os << "Crust composition: " << crustComposition << "\n"
		 << "Core composition: "  << coreComposition  << "\n";
}


void RockyPlanet::explore(std::ostream& os) const
{
	os << std::fixed << std::setprecision(2);
	os << "------------------------------\n"
		 << "Rocky Planet" 								  << getName() 												<< ":\n\n"
		 << "Equatorial Diameter: " 				<< getDiameter() 										<< " km\n"
		 << "Distance from sun: " 					<< getDistanceFromSun() 						<< " million km\n"
		 << "Gravity: " 										<< getGravity() 										<< " m/sˆ2 \n"
		 << "Has water: " 									<< (getHasWater() ? "Yes" : "No") 	<< "\n"
		 << "Crust composition: " 					<< crustComposition 								<< "\n"
	   << "Core composition: " 					  << coreComposition 									<< "\n";
}


std::string RockyPlanet::getCrustComposition() const
{
	return crustComposition;
}

std::string RockyPlanet::getCoreComposition() const
{
	return coreComposition;
}

