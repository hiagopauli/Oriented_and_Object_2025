#include "person.h"
#include <iostream>


Person::Person(const std::string& name, int age): 
	name(name), age(age)
{
}

std::string Person::getName() const
{
	return name;
}

int Person::getAge() const
{
	return age;
}
	
void Person::display() const
{
	std::cout << "-------" 										 	<< std::endl;
	std::cout << "What is your name: " 	<< name << std::endl;
	std::cout << "How old are you: 	 " 	<< age 	<< std::endl << std::endl;
}

void Person::introduce () const
{
	std::cout << "My name is " << name << ", I have " << age << "years old." << std::endl;
}

