#include "motorcycle.h"
#include <iostream>

Motorcycle::Motorcycle (int days) : Vehicle (days)

{
}

double Motorcycle::calculateDay() const
{
	return getDaysRented() * 50;
}

