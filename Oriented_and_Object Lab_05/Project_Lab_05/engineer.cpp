#include "engineer.h"
#include <iostream>

Engineer::Engineer(const std::string& name, int age, const std::string& engfield):
	Person(name, age), engfield(engfield)
{
}

std::string Engineer::getEngfield() const
{
	return engfield;
}

void Engineer::display() const
{
	std::cout << "Which field are you an engineer? " << engfield << std::endl;
}

void Engineer::introduce() const
{
	std::cout << "I am an engineer, my name is " << name << ", I have " << age << "years old, I am an engineer specialized in " << engfield << "."  << std::endl;
}
