#include "shape.h"
#include "circle.h"
#include <cmath>

Circle::Circle(double r) : radius (r)
{
}

double Circle::calculateArea() const
{
	return Shape::PI * radius * radius;

}

