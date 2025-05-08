#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle :

public Shape 
{
	private:
		double length;
		double width;
	
	public:
		Rectangle(double l, double w);
		double calculateArea() const override;
};

#endif
