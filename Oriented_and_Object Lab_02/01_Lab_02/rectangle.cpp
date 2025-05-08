#include "shape.h"
#include "rectangle.h"

Rectangle::Rectangle(double l, double w) : length(l), width(w) 
{
}

double Rectangle::calculateArea() const
{
	return length * width;

}

