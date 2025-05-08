#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{

	private:
		double radius;
	
	public:
		explicit Circle(double r);

		double calculateArea() const override;
};

#endif


