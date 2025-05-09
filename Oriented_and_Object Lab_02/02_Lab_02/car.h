#ifndef CAR_H
#define CAR_H

#include "rent.h"
#include "vehicle.h"


class Car : public Vehicle 
{
	public:
		Car(int days);
		double calculateDay() const override;
};

#endif
