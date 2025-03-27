#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
	private:
	std::string horsepower;
	std::string speed;

	public:
		Car(const std::string& horsepower, const std::string& speed);
	
		const std::string& GetHorsePower()  const
		{	
			return horsepower;
		}

		const std::string& GetSpeed() const
		{
			return speed;
		}

		std::string DisplayInfo() const;
};

#endif


