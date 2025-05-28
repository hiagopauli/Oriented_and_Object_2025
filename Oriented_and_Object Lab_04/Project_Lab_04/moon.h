#ifndef MOON_H
#define MOON_H

#include "celestialbody.h"
#include "explorer.h"
#include <string>


class Moon : public CelestialBody, public Explorer
{
	private:
		std::string orbitsPlanet;
	
	public:	
		Moon(const std::string& name, double diameter,
				 const std::string& orbitsPlanet);
		
		void explore(std::ostream& os) const override;;

		std::string getOrbitsPlanet() const;
		void displayInfo(std::ostream& os) const;
	
		std::string getFormattedInfo() const;
};
	
#endif

