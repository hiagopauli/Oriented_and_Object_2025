#include "planet.h"
#include <string>
#include <iostream>

Planet::Planet(const std::string& name, double diameter, 
							 double distanceFromSun, double gravity, bool hasWater):
	CelestialBody(name, diameter),
	distanceFromSun(distanceFromSun),
	gravity(gravity), 
	hasWater(hasWater)
{
}

double Planet::getDistanceFromSun() const
{
	return distanceFromSun;
}

double Planet::getGravity() const
{
	return gravity;
}

bool Planet::getHasWater() const
{
	return hasWater;
}

void Planet::setDistanceFromSun(double distance)
{
	distanceFromSun = distance;
}

void Planet::setGravity(double g)
{
	gravity = g;
}

void Planet::setHasWater(bool water)
{
	hasWater = water;
}

void Planet::explore(std::ostream& os) const
{
	os << "Exploring planet " 			<< getName() 										 	 << "\n";
	os << "Diameter: "         			<< getDiameter() 									 << "\n";
	os << "Distance from sun: " 		<< getDistanceFromSun() 					 << "\n";
	os <<	"Gravity: " 							<< getGravity() 									 << "\n";
	os << "Has water: " 						<< (getHasWater() ? "Yes" : "No")  << "\n";
}

void Planet::displayInfo(std::ostream& os) const
{
	CelestialBody::displayInfo(os);
	os << "Distance from sun: " 	<< distanceFromSun 						<< " millions km\n"
		 << "Gravity: " 						<< gravity 										<< " m/sˆ2\n"
		 << "Has water: "				  	<< (hasWater? "Yes" : "No") 	<< "\n";
}
