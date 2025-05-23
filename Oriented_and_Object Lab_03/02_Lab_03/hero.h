#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <memory>
#include <string>


class Hero
{
	public:
		virtual void attack() const = 0;
		virtual void showClass() const = 0;
		virtual ~Hero() = default;
};

#endif
