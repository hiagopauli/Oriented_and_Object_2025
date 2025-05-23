#include <iostream>
#include <stdexcept>
#include "divider.h"

void Divider::readInput()
{
	std::cout << "Enter with your dividend: " << std::endl;	
	std::cin >> data.dividend;
	
	std::cout << "Enter with your divisor: " << std::endl;
	std::cin >> data.divisor;
}

int Divider::calculateRemainder()
{
	if (data.divisor == 0)
	{
		throw std::runtime_error("Not allowed division with 0.");
	}
	return data.dividend % data.divisor;
}
