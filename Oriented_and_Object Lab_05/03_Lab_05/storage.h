#ifndef STORAGE_H
#define STORAGE_H

#include "game.h"
#include "rpg.h"
#include "sport.h"
#include "strategy.h"

#include <memory>
#include <vector>
#include <string>

class Storage
{
	std::vector<std::unique_ptr<Game>> games;
	
	public:
		Storage();
		void showAll() const;
		void showByType(const std::string& type) const;

};


#endif
