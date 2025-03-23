#include <iostream>
#include "wolf.h"
#include "tiger.h"
#include "gorilla.h"

int main ()

{
	Wolf myWolf;
	std::cout << myWolf.getInfo()    << std::endl;

	Tiger myTiger;
	std::cout << myTiger.getInfo()   << std::endl;
	
	Gorilla myGorilla;
	std::cout << myGorilla.getInfo() << std::endl;

	return EXIT_SUCCESS;
}
