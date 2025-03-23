#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
protected :
	std::string name;
	std::string type;
	std::string animalStatus;

public :
	Animal(const std::string& name, const std::string& type);
	std::string getAnimalStatus() const;
	std::string getInfo() const;
	
};

#endif
	
