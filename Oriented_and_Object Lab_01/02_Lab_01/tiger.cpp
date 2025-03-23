#include "tiger.h"
#include <iostream>

Tiger::Tiger() : Mammal("Tiger")
{
	tigerStatus = "Murmurs.";
}

std::string Tiger::getTigerStatus() const
{
	return tigerStatus;
}

std::string Tiger::getInfo() const
{
	return Mammal::getInfo() + "\n" + "Tiger Status: " + tigerStatus;
}
