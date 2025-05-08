#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
	private:
		double length;
		double width;

	public:
		Triangle(double l, double w);	
		double calculateArea() const override;

};

#endif
