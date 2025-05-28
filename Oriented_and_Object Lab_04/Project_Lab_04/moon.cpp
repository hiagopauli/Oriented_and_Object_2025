#include "moon.h"
#include <sstream>
#include <iostream>
#include <iomanip>
#include <sstream>


Moon::Moon(const std::string& name, double diameter,
					 const std::string& orbitsPlanet):
	CelestialBody(name, diameter),
	orbitsPlanet(orbitsPlanet)
{
}

void Moon::explore(std::ostream& os) const
{
	std::ostringstream oss;
	oss	<< std::fixed << std::setprecision(2);
	oss << "--------------------\n"
			<< "Moon\n"
      << "Name: " 								<< getName() 			<< "\n"
		  << "Diameter: " 						<< getDiameter() 	<< " km\n"
	    << "Orbit: "	 							<< orbitsPlanet 	<< "\n";

}

std::string Moon::getOrbitsPlanet() const
{
	return orbitsPlanet;
}

void Moon::displayInfo(std::ostream& os) const
{
	CelestialBody::displayInfo(os);
	os << "Orbits: " << orbitsPlanet << "\n";
}


