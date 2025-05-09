#include "car.h"
#include <iostream>

Car::Car(int days) : Vehicle (days)

{
}

double Car::calculateDay() const
{
	return getDaysRented() * 80.0;
}

