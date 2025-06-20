#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"
#include <string>
#include <iostream>


class Engineer : public Person
{
	public:
		Engineer(const std::string& name, int age, const std::string& engfield);
	
		std::string getEngfield() const;
		void introduce() const override;
		void display() const;
/*
		virtual ~Engineer() = default;
		void introduce() const override
		{
			std::cout << "Hellow, I am an engineer, my name is " << name << ", I have" << age << " years old, " 
								<< "Im engineer on field of " << engfield << "." << std::endl;
		}
*/
	
	private:
		std::string engfield;

};

#endif
