#ifndef WOLF_H
#define WOLF_H

#include "mammal.h"

class Wolf : public Mammal
{
	private:
		std::string wolfStatus;
	
	public:
		Wolf();
		std::string getWolfStatus() const;
		std::string getInfo() const;
};

#endif
