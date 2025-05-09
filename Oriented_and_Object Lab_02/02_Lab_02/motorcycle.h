#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "rent.h"
#include "vehicle.h"

class Motorcycle : public Vehicle
{
	public:
		Motorcycle(int days);
		double calculateDay() const override;
};

#endif
