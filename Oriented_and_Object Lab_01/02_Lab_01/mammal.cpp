#include "mammal.h"
#include <iostream>

Mammal::Mammal(const std::string& name) :
	Animal(name, "Mammal")
	{
		mammalStatus = "Drink milk and grow up.";
	}
	
std::string Mammal::getMammalStatus() const
	{
		return	mammalStatus;
	}

std::string Mammal::getInfo() const 
	{
		return Animal::getInfo() + "Mammal status: " + mammalStatus;
	}

