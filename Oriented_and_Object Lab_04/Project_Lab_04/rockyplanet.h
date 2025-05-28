#ifndef ROCKYPLANET_H
#define ROCKYPLANET_H

#include "planet.h"
#include <string>

class RockyPlanet : public Planet
{
	private:
		std::string crustComposition;;
		std::string coreComposition;	

	public:
		RockyPlanet(const std::string& name, double diameter,
								double distanceFromSun, double gravity, bool water,
								const std::string& crust, const std::string& core);
		void explore(std::ostream& os) const override;
		
		std::string getCrustComposition() const;
		std::string getCoreComposition() const;

	void displayInfo(std::ostream& os) const override;

};

#endif
