#ifndef RENT_H
#define RENT_H

class Rent
{
	public:
		virtual double calculateDay() const = 0;
		virtual ~Rent() = default;

};

#endif
