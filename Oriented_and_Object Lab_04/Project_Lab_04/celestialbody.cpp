#include "celestialbody.h"
#include <iostream>

CelestialBody::CelestialBody(const std::string& name, double diameter):
		name(name), diameter(diameter)
{
}

std::string CelestialBody::getName() const
{
	return name;
}

double CelestialBody::getDiameter() const 
{
	return diameter;
}

void CelestialBody::setName(const std::string& newName)
{
	name = newName;
}

void CelestialBody::setDiameter(double newDiameter)
{
	diameter = newDiameter;
}

void CelestialBody::displayInfo(std::ostream& os) const
{
	std::cout << "Celestial body name: " 	<< name << std::endl;
	std::cout << "Diameter: " 						<< diameter << "km\n";
}

