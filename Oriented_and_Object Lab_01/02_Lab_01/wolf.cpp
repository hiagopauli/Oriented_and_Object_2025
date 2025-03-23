#include "wolf.h"
#include <iostream>

Wolf::Wolf() : Mammal("Wolf")
{
	wolfStatus = "Howl to the moon.";
}

std::string Wolf::getWolfStatus() const
{
	return wolfStatus;
}

std::string Wolf::getInfo() const
{
	return Mammal::getInfo() + "\n" + "Wolf status: " + wolfStatus;
}

