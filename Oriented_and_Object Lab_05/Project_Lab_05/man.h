#ifndef MAN_H
#define MAN_H

#pragma once
#include "person.h"

class Man : public Person
{
	public:
		Man(const std::string& name, int age);
		void introduce() const override;
		void display() const override;


	private:
		std::string name;
		int age;
};

#endif
