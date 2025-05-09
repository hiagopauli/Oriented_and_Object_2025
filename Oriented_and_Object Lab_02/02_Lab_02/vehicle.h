#ifndef VEHICLE_H
#define VEHICLE_H

#include "rent.h"

class Vehicle : public Rent
{
	protected:
		int daysRented;

	public:
		Vehicle(int days);
		virtual ~Vehicle() = default;

		int getDaysRented() const;
		virtual double calculateDay() const override = 0;
};

#endif
