#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(int days) : daysRented(days)
{
}
	
int Vehicle::getDaysRented() const
{
	return daysRented;
}

	
