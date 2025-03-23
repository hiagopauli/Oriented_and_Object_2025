#ifndef DATABASE_H
#define DATABASE_H

#include "car.h"

class Database
{
private:

	std::vector<Car> cars;
	
public:

	//add car
	void InitCars();

	//display
	std::string DisplayAll() const;
	
};

#endif

