#include "triangle.h"

Triangle::Triangle (double l, double w) : length(l), width(w)
{
}

double Triangle::calculateArea() const
{
	return length * width / 2;
}


