#include "bicycle.h"
#include <iostream>

Bicycle::Bicycle (int days) : Vehicle (days)

{
}

double Bicycle::calculateDay() const
{
	return getDaysRented() * 20;
}

