#include "person.h"
#include "man.h"
#include "woman.h"
#include "student.h"
#include "doctor.h"
#include "engineer.h"

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <cstdlib>
#include <limits>

int main()
{
	std::vector<std::unique_ptr<Person>> person;
	int gender_choice;
		
	do
	{
		std::cout << "Introduce helper menu." 						 << std::endl;
		std::cout << "Enter with your gender." << std::endl << std::endl;
		std::cout << "[1] - Man" 													 << std::endl;
		std::cout << "[2] - Woman" 					 							 << std::endl;
		std::cout << "[3] Exit introduction." 						 << std::endl;
		std::cout << "Choice: " 							<< std::endl << std::endl;
		std::cin >> gender_choice;

		if (gender_choice == 3)
		{
			std::cout << "Program closed." << std::endl;
			break;
		}
	 	
		if (gender_choice != 1 && gender_choice != 2) 
		{
			std::cout << "Invalid choice." << std::endl;
			continue;
		}

		std::string name;
		int age;	
		std::cin.ignore();

		std::cout << "What is your name? " << std::endl;
		std::cin >> name;	
		std::cout << "What is your age? " << std::endl;
		std::cin >> age;
		std::cin.ignore();

		std::cout << "Select who you are." 		<< std::endl;
		std::cout << "[1] - Just a person." 	<< std::endl;
		std::cout << "[2] - Student." 				<< std::endl;
		std::cout << "[3] - Doctor." 					<< std::endl;
		std::cout << "[4] - Engineer." 				<< std::endl;
		std::cout << "Choice: " 							<< std::endl << std::endl;
		
		int role_choice;
		std::cin >> role_choice;	
		std::cin.ignore();
		
		if (role_choice == 1)
		{
			if (gender_choice == 1)
				person.push_back(std::make_unique<Man>(name, age));

			else if (gender_choice == 2)
				person.push_back(std::make_unique<Woman>(name, age));
		}

		else if (role_choice == 2)
		{	
			std::string school, level, field;
			std::cout << "Write your school: " << std::endl;
			std::getline(std::cin, school);
			std::cout << "Write your study level/type: " << std::endl;
			std::getline(std::cin, level);
			std::cout << "Write your field of study: " << std::endl;
			std::getline(std::cin, field);
		
			person.push_back(std::make_unique<Student>(name, age, school, level, field));
		}

		else if (role_choice == 3)
		{
			std::string specialization;
			std::cout << "Write your specialization: " << std::endl;	
			std::getline(std::cin, specialization);
			
			person.push_back(std::make_unique<Doctor>(name, age, specialization));
		
		}

		else if (role_choice == 4)
		{
			std::string engfield;
			std::cout << "Which field are you an engineer? " << std::endl;
			std::getline(std::cin, engfield);
	
			person.push_back(std::make_unique<Engineer>(name, age, engfield));
		}
		
		else
		{
			std::cout << "Invalid choice." << std::endl;
		}
	}
	while (true);

	
	std::cout << "Introduction helper" << std::endl;
	for (const auto& p : person)
	{
		p->display();
		p->introduce();
		std::cout << std::endl;
	}
	
	return EXIT_SUCCESS;
}
