#include "animal.h"
#include <iostream>


Animal::Animal(const std::string& name, const std::string& type):
	name(name),
	type(type),
	animalStatus("Breath and eat.")
{
}

std::string Animal::getAnimalStatus() const
{
	return animalStatus;
}

std::string Animal::getInfo() const
{
	return "\nAnimal\n\nName:" + name + "\n" + "Type: " + type + "\n" + "Animal Status: " + animalStatus + "\n"; 

}


