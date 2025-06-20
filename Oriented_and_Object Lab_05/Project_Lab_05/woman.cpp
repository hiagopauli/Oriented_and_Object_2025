#include "woman.h"
#include <iostream>

Woman::Woman(const std::string& name, int age) : Person(name, age)
{
}

void Woman::introduce() const
{
	Person::introduce();
	std::cout << "I am a woman, my name is " << name << ", I have " << age << "years old. " << std::endl;
}


void Woman::display() const
{
	std::cout << "Name: " << name << ", age: " << age << ", gender: woman" << std::endl;
}

