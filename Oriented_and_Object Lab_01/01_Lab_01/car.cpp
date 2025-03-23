#include <iostream>
#include <string>
#include "car.h"


//implementation 

Car::Car(const std::string& brand, const std::string& model, int year):
	brand(brand),
	model(model),
	year(year)
{
}

const std::string& Car::GetBrand() const
{
	return brand;
}

const std::string& Car::GetModel() const
{
	return model;
}

int Car::GetYear() const
{
	return year;
}

//Display
std::string Car::DisplayInfo() const

{
	std::string result;
	std::cout << "Car Database: "                       << std::endl  << std::endl;
	std::cout << "Brand: "                 << brand                   << std::endl;
	std::cout << "Model: "                 << model                   << std::endl;
  std::cout << "Year: "                  << year      << std::endl  << std::endl;
	
	return result;
}

