#include "man.h"
#include <iostream>

Man::Man(const std::string& name, int age) : Person(name, age)
{
}

void Man::introduce() const 
{
	std::cout << "I am a man, my name is " << name << ", I have " << age << " years old."  << std::endl;
}

void Man::display() const
{
	std::cout << "Name: " << name << ", Age: " << age << ", Gender: Man" << std::endl;
}
