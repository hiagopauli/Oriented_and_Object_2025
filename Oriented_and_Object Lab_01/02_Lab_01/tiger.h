#ifndef TIGER_H
#define TIGER_H

#include "mammal.h"

class Tiger : public Mammal
{
	private:
		std::string tigerStatus;
	public:
		Tiger();
		std::string getTigerStatus() const;
		std::string getInfo() const;
};

#endif
