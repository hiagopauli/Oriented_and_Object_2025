#ifndef WOMAN_H
#define WOMAN_H

#pragma once
#include "person.h"

class Woman : public Person
{
	public:
		Woman(const std::string& name, int age);
		void display() const override;
		void introduce() const override;

/*		
		void introduce() const override
		{
			std::cout << "I am a woman, my name is " << name << ", I have " << age << "years old." << std::endl;
		}
*/
	
	private:
		std::string name;
		int age;
		
};

#endif
