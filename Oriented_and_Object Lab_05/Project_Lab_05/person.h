#ifndef PERSON_H
#define PERSON_H

#pragma once
#include <string>
#include <iostream>

class Person
{
	public:
		Person(const std::string& name, int age);

		virtual void introduce() const = 0;
		virtual void display() const = 0;
		virtual ~Person() = default;
			
		std::string getName() const;
		int getAge() const;
	
			
	protected:
		std::string name;
		int age;

};

#endif
