#ifndef GORILLA_H
#define GORILLA_H

#include "mammal.h"

class Gorilla : public Mammal
{
	private:
		std::string gorillaStatus;
	public:
		Gorilla();
		std::string getGorillaStatus() const;
		std::string getInfo() const;
};

#endif
