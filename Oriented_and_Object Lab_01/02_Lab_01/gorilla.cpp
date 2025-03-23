#include "gorilla.h"
#include <iostream>

Gorilla::Gorilla() : Mammal("Gorilla")
{
	gorillaStatus = "Climb tree.";
}

std::string Gorilla::getGorillaStatus() const
{
	return gorillaStatus;
}

std::string Gorilla::getInfo() const
{
	return Mammal::getInfo() + "\n" + "Gorilla Status: " + gorillaStatus;
}
