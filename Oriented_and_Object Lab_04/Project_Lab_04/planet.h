#ifndef PLANET_H
#define PLANET_H

#include "celestialbody.h"
#include "explorer.h"
#include <string>

class Planet : public CelestialBody, public Explorer
{
	protected:
		double distanceFromSun;
		double gravity;
		bool hasWater;
		
	public:
		Planet(const std::string& name, double diameter,
					 double distanceFromSun, double gravity, bool hasWater);
		
		double getDistanceFromSun() const;
		double getGravity() const;
		bool getHasWater() const;
	
		void setDistanceFromSun(double distance);
		void setGravity(double g);
		void setHasWater(bool water);
		
		void explore(std::ostream& os) const override;
			
		void displayInfo(std::ostream& os) const override;

};
	
#endif
