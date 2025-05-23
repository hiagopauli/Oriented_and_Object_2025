#include <iostream>
#include <memory>
#include <stdexcept>
#include "divider.h"



int main()
{
	std::unique_ptr<Divider> divider = std::make_unique<Divider> ();
		
	try
	{
		divider->readInput();
		int result = divider->calculateRemainder();
		std::cout << "Remainder: " << result << std::endl;
	}
		
	catch (const std::runtime_error& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}
