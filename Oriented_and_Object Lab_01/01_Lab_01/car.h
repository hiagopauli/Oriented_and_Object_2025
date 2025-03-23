#ifndef CAR_H
#define CAR_H

#include <string>


class Car
{
	private:
	std::string brand;
	std::string model;
	int year;

	public:
	
	Car(const std::string& brand, const std::string& model, int year);
	

	const std::string& GetBrand() const;
	const std::string& GetModel() const;
	int GetYear() const;

	//display method
	std::string DisplayInfo() const;
};

#endif 
	
