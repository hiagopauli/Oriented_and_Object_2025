#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person
{
	public: 
		Student(const std::string& name, int age, const std::string& school, const std::string& level, const std::string& field);
		std::string getSchool() const;
		std::string getLevel() const;
		std::string getField() const;

		void introduce() const override;
		void display() const;		

/*	
		void introduce() const override
		{
			std::cout << "Hello, I am a student, my name is " << name << ", I have " << age << "years old, " std::endl;
			std::cout << "I study at " << school << ", " << level << " of " << field << "." << std::endl;
		}
*/	
		virtual ~Student() = default;

	private:
		std::string school; 
		std::string level;
		std::string field;


};

#endif
