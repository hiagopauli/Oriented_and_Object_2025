#include "gasgiant.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

GasGiant::GasGiant(const std::string& name, double diameter, double distanceFromSun, 
									 double gravity, bool hasWater, const std::string& dominantGas, 
									 const std::string& planetType):
		
		Planet(name, diameter, distanceFromSun, gravity, hasWater),
		dominantGas(dominantGas),
		planetType(planetType)
{
}

std::string GasGiant::getPlanetType() const
{
	return planetType;
}

std::string GasGiant::getDominantGas() const
{
	return dominantGas;
}

void GasGiant::setDominantGas(const std::string& gas)
{
	dominantGas = gas;
}

void GasGiant::setPlanetType(const std::string& type)
{
	planetType = type;
}
void GasGiant::displayInfo(std::ostream& os) const
{
	Planet::displayInfo(os);
	os << "Dominant gas: " << dominantGas << "\n"
		 << "Planet type: "  << planetType  << "\n";
}

void GasGiant::explore(std::ostream& os) const
{
	os  << std::fixed << std::setprecision(2);
	os  << "--------------------\n"
	    << "Gas giant name:"	 						<< getName() 												<< "\n\n"
      << "Equatorial diameter: " 				<< getDiameter()  		 							<< " km\n"
		  << "Distance from sun: "   				<< getDistanceFromSun() 						<< " million km\n"
	    << "Gravity: " 										<< getGravity() 										<< " m/sˆ2 \n"
		  << "Has Water? " 									<< (getHasWater() ? "Yes" : "No")	 	<< " \n"
		  << "Dominant Gas: " 							<< dominantGas											<< " \n"
		  << "Planet Type: " 								<< planetType 											<< " \n\n";
	os  << "Planet with dominant gas "    << dominantGas 											<< " \n";
}

