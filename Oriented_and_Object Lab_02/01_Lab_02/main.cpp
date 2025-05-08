#include <iostream>
#include <memory>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"


int main()
{
	int choice;
	std::cout << "__________________________________ " 				<< std::endl;
	std::cout << "Press 1 for calculate area of rectangle. "  << std::endl;
	std::cout << "Press 2 for calculate area of circle. " 		<< std::endl;
	std::cout << "Press 3 for calculate area of triangle. "		<< std::endl;
	std::cin  >> choice;
	
	if (choice == 1)
	{
		double lenght, width;
		std::cout << "Write the length of rectangle: " << std::endl;
		std::cin >> lenght;

		std::cout << "Write the width of rectangle:  " << std::endl;
		std::cin >> width;

		Rectangle shape(lenght, width);
		std::cout << "Area of the rectangle: " << shape.calculateArea() << std::endl;
	}
	
	else if (choice == 2)
	{
		double radius;
		std::cout << "Write the radius of the circle: " << std::endl;
		std::cin >> radius;

		Circle shape(radius);
		std::cout << "Area of the circle: " << shape.calculateArea() << std::endl;
	}

	else if (choice == 3)
	{
		double length, width;
		std::cout << "Write the length of triangle: " << std::endl;
		std::cin >> length;
		
		std::cout << "Write the width of triangle: " << std::endl;
		std::cin >> width;

		Triangle shape (length, width);
		std::cout << "Area of the triangle: " << shape.calculateArea() << std::endl;
	}

	else 
	{
		std::cout << "Exiting program." << std::endl;
	}

	return EXIT_SUCCESS;
}
