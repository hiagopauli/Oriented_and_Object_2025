#include <iostream>
#include <string>
#include <format>
#include "car.h"

//implementation 

Car::Car(const std::string& horsepower, const std::string& speed):
	horsepower(horsepower),
	speed(speed)

{
}

//Display

/*std::string Car::DisplayInfo() const

{
	std::string result;
	std::cout << "Car Database: " << std::endl;	
	std::cout << "Horse Power: " << horsepower << std::endl;
	std::cout << "Max Speed: " << speed << std::endl;
	return result;
}*/

std::string Car::DisplayInfo() const

{
	//std::string result;
	//result = "Car Database: \n";	
	//result += ("Horse Power: " + horsepower + "\n";
	//result += ("Max Speed: " + speed + "\n";
	
	return std::format("Car Database:\nHorse Power: {}\nMax Speed: {}\n", horsepower, speed);

	//return result;
}



	
