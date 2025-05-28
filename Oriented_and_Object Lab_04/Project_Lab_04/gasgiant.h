#ifndef GASGIANT_H
#define GASGIANT_H

#include "planet.h"
#include <string>

class GasGiant : public Planet
{
	private:
		std::string dominantGas;
		std::string planetType;
	
	public:
		GasGiant(const std::string& name, double diameter, double distanceFromSun, double gravity, 
						 bool hasWater, const std::string& dominantGas, const std::string& planetType);

	  std::string getPlanetType() const;
		void setPlanetType(const std::string& type);

		std::string getDominantGas() const;
		void setDominantGas(const std::string& gas);

		virtual void explore(std::ostream& os) const override;
		void displayInfo(std::ostream& os) const override;
};

#endif
