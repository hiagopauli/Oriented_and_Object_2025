#ifndef GAME_H
#define GAME_H

#include <string>
#include <iostream>

class Game
{
	public:
		Game(const std::string& title, double price);
		virtual ~Game() = default;
		virtual void description() const = 0;
		virtual std::string getType() const = 0;
		
	protected:
		std::string title;
		double price;

};

#endif
