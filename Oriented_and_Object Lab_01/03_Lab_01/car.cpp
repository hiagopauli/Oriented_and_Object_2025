#include <iostream>
#include <string>
#include "car.h"

//implementation 

Car::Car(const std::string& horsepower, const std::string& speed):
	horsepower(horsepower),
	speed(speed)

{
}

//Display

std::string Car::DisplayInfo() const

{
	std::string result;
	std::cout << "Car Database: " << std::endl;	
	std::cout << "Horse Power: " << horsepower << std::endl;
	std::cout << "Max Speed: " << speed << std::endl;
	return result;
}

	
