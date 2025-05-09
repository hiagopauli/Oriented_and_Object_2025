#ifndef BICYCLE_H
#define BICYCLE_H

#include "rent.h"
#include "vehicle.h"

class Bicycle : public Vehicle
{
	public:
		Bicycle(int days);
		double calculateDay() const override;
};

#endif
