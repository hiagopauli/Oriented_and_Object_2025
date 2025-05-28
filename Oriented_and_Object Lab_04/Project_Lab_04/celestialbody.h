#ifndef CELESTIALBODY_H
#define CELESTIALBODY_H

#include <string>

class CelestialBody
{
	protected:
		std::string name;
		double diameter;
	
	public:
		CelestialBody(const std::string& name, double diameter);		
		virtual ~CelestialBody() = default;

		virtual void displayInfo (std::ostream& os) const;

		std::string getName() const;	
		double getDiameter() const;
	
		void setName(const std::string& newName);
		void setDiameter(double newDiameter);
		

};

#endif
