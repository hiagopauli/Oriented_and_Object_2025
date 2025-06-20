#ifndef DOCTOR_H
#define DOCTOR_H

#pragma once
#include "person.h"
#include <string>


class Doctor : public Person
{

	public:
		Doctor(const std::string& name, int age, const std::string& specialization);
		
		std::string getSpecialization() const;
		
		void display() const;
		virtual ~Doctor() = default;

		void introduce() const override;

/*	void introduce() const override
		{
			std::cout << "I am a doctor, my name is " << name << ", I have " << age << " years old, " 
								<< "my specialization of engineer is" << specialization << "." << std::endl;
		}
*/

	private:
		std::string specialization;

};

#endif
