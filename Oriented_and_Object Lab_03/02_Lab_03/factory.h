#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
#include <string>
#include <memory>
#include "hero.h"
#include "mage.h"
#include "ranger.h"
#include "warrior.h"

class Factory
{
	public:
	static std::unique_ptr<Hero> createHero(const std::string& type)
	{

		if (type == "warrior")
		{
			return std::make_unique<Warrior>();
		}
		else if (type == "ranger")
		{
			return std::make_unique<Ranger>();
		}
		else if (type == "mage")
		{
			return std::make_unique<Mage>();
		}
		else
		{
			return nullptr;
		}
	}
};

#endif
