#include "doctor.h"
#include <iostream>

Doctor::Doctor(const std::string& name, int age, const std::string& specialization):
	Person(name, age), specialization(specialization)

{
}

std::string Doctor::getSpecialization() const
{
	return specialization;
}

void Doctor::display() const
{
	std::cout << "What is your specialization? " << specialization << std::endl << std::endl;
}


void Doctor::introduce() const
{
	std::cout << "I am a doctor, my name is " << name << ", I have " << age << " years old, " 
						<< " I am a doctor of " << specialization << "." << std::endl;
}


