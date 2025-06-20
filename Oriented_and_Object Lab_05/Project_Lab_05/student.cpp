#include "student.h"
#include <iostream>

Student::Student(const std::string& name, int age, const std::string& school, const std::string& level, const std::string& field):
	Person(name, age), school(school), level(level), field(field)
{
}

std::string Student::getSchool() const
{
	return school;
}

std::string Student::getLevel() const
{
	return level;
}

std::string Student::getField() const
{
	return field;
}


void Student::display() const
{
	std::cout << "What is your school? " 					<< school << std::endl;
	std::cout << "Which level is your studies? " 	<< level  << std::endl;
	std::cout << "What is the field of study? " 	<< field 	<< std::endl << std::endl; 
}


void Student::introduce() const
{
	std::cout << "Hello, my name is " << name << ", I have " << age << " years old, Im student and I study at " << school 
						<< ", " << level << "of " << field << "." << std::endl;
}

