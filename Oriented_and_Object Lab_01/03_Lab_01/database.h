#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <string>

#include "amphibious.h"

class Database
{
	private:
		std::vector<Amphibious> vehicles;
	
	public:
		void InitVehicle();

		//display
		std::string DisplayAll() const;
};

#endif

