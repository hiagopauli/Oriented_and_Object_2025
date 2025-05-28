#include <fstream>
#include <iomanip>
#include <limits>
#include <memory>
#include <vector>
#include <iostream>
#include <chrono>
#include "moon.h"
#include "gasgiant.h"
#include "rockyplanet.h"
#include "gasringplanet.h"

const std::string DATA_FILE = "celestial.txt";

void saveToFile(const std::vector<std::unique_ptr<CelestialBody>>& bodies, bool append = true)
{
	std::ios_base::openmode mode = append ? std::ios::app : std::ios::out;
	std::ofstream outFile(DATA_FILE, mode);

	if(outFile.is_open())
	{
		auto now = std::chrono::system_clock::now();	
		std::time_t now_time = std::chrono::system_clock::to_time_t(now);
		
		outFile << "\n[Entry: " << std::ctime(&now_time) << "]\n";
		for (const auto& body : bodies)
		{
			if (body)
			{
				body ->displayInfo(outFile);	
				outFile << "---------------\n";
			}
		}
	}
	else
	{
		std::cerr << "Cant save to file." << std::endl;
	}
}


void displayMainMenu()
{
	std::cout << "---------------------" 				<< std::endl;
	std::cout << "Enter with your choice: " 		<< std::endl;
	std::cout << "1. Create Gas Giant."	 				<< std::endl;
	std::cout << "2. Create Rocky Planet." 			<< std::endl;
	std::cout << "3. Create Moon." 							<< std::endl;
	std::cout << "4. Create Gas Ring Planet." 	<< std::endl;
	std::cout << "5. Print bodies data system." << std::endl;
	std::cout << "6. Exit."                     << std::endl << std::endl;
}

template<typename T, typename... Args>
std::unique_ptr<CelestialBody> createCelestialBody(Args&&... args)
{
	return std::make_unique<T>(std::forward<Args>(args)...);
}


std::string getBodyInfo(const CelestialBody& body)
{
	std::ostringstream oss;
	body.displayInfo(oss);
	return oss.str();
}


void createGasGiant(std::vector<std::unique_ptr<CelestialBody>>& bodies)
{
	std::string name, dominantGas, planetType;
	double diameter, distance, gravity;
	bool hasWater;
	
	std::cout << "Name: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, name);	
		
	std::cout << "Diameter (km): ";
	std::cin  >> diameter;
	
	std::cout << "Distance from sun (millions km): ";
	std::cin >> distance;
		
	std::cout << "Gravity (m/sˆ2): ";
	std::cin >> gravity;

	std::cout << "Has water (1 for yes, 0 for no): ";
	std::cin >> hasWater;

	std::cin.ignore();
	std::cout << "Dominant gas: ";
	std::getline(std::cin, dominantGas);

	std::cout << "Planet Type: ";
	std::getline(std::cin, planetType);

	bodies.push_back(std::make_unique<GasGiant>(name, diameter, distance, gravity, hasWater, dominantGas, planetType));
	std::cout << "Gas Giant created successfully.\n";

	auto newBody = std::make_unique<GasGiant>(name, diameter, distance, gravity, hasWater, dominantGas, planetType);
	
	saveToFile(bodies);	
	std::cout << "\n Gas giant created with success.\n";
	
}

void createRockyPlanet(std::vector<std::unique_ptr<CelestialBody>>& bodies)
{
	std::string name, crustComposition, coreComposition;
	double diameter, distance, gravity;
	bool hasWater;
	
	std::cout << "Name: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, name);	
		
	std::cout << "Diameter (km): ";
	std::cin  >> diameter;
	
	std::cout << "Distance from sun (millions km): ";
	std::cin >> distance;
		
	std::cout << "Gravity (m/sˆ2): ";
	std::cin >> gravity;

	std::cout << "Has water (1 for yes, 0 for no): ";
	std::cin >> hasWater;

	std::cin.ignore();
	std::cout << "Crust composition: ";
	std::getline(std::cin, crustComposition);

	std::cout << "Core composition: ";
	std::getline(std::cin, coreComposition);

	bodies.push_back(std::make_unique<RockyPlanet>(name, diameter, distance, gravity, hasWater, crustComposition, coreComposition));
	std::cout << "Rocky planet created successfully.\n";

	
	saveToFile(bodies);	
	std::cout << "\n Rocky planet created with success.\n";

}


void createMoon(std::vector<std::unique_ptr<CelestialBody>>& bodies)
{
	std::string name, orbits;
	double diameter;
	
	std::cout << "Name: ";
	std::cin.ignore();
	std::getline(std::cin, name);	
		
	std::cout << "Diameter (km): ";
	std::cin  >> diameter;
	
	std::cin.ignore();
	std::cout << "Orbits planet: ";
	std::getline(std::cin, orbits);

	bodies.push_back(std::make_unique<Moon>(name, diameter, orbits));
	std::cout << "Moon created successfully.\n";

	saveToFile(bodies);	
	std::cout << "\n Moon created with success.\n";


}

void createGasRingPlanet(std::vector<std::unique_ptr<CelestialBody>>& bodies)
{
	std::string name, dominantGas, planetType;;
	double diameter, distance, gravity;
	bool hasWater;
	int ringCount;
	
	std::cout << "Name: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, name);	
		
	std::cout << "Diameter (km): ";
	std::cin  >> diameter;
	
	std::cout << "Distance from sun (millions km): ";
	std::cin >> distance;
		
	std::cout << "Gravity (m/sˆ2): ";
	std::cin >> gravity;

	std::cout << "Has water (1 for yes, 0 for no): ";
	std::cin >> hasWater;

	std::cin.ignore();
	std::cout << "Dominant gas: ";
	std::getline(std::cin, dominantGas);

	std::cout << "Planet type: ";
	std::getline(std::cin, planetType);

	std::cout << "Number of rings: ";
	std::cin >> ringCount;

	bodies.push_back(std::make_unique<GasRingPlanet>(name, diameter, 
									 distance, gravity, hasWater, dominantGas,planetType, ringCount));
	std::cout << "Gas Ring Planet created successfully.\n";

	saveToFile(bodies);	
	std::cout << "\n Gas Ring Planet created with success.\n";

}

void printAllBodies(const std::vector<std::unique_ptr<CelestialBody>>& bodies)
{
	std::cout << "Celestial Bodies on data saved-------" << std::endl;
	for (const auto& body : bodies)
	{
		if (body)
		{
		body-> displayInfo(std::cout);
		std::cout << "------------------\n";
		}
	}

	std::cout << "Celestial Bodies saved from file:" << std::endl;
	std::ifstream inFile(DATA_FILE);
	if (inFile.is_open())
	{
		std::string line;	
		while (std::getline(inFile, line))
		{
			std::cout << line << "\n";
		}
		inFile.close();
	}
	else
	{
		std::cerr << "Cant open data file.\n";
	}		


}

void saveAllData(const std::vector<std::unique_ptr<CelestialBody>>& bodies)
{
	std::ofstream outFile(DATA_FILE);	
	if (outFile.is_open())
	{
		outFile << "DATABASE--- " << std::endl;
		for (const auto& body : bodies)
		{
			body->displayInfo(outFile);
			outFile << "------------------" << std::endl;
		}
		std::cout << "All data saved to " << DATA_FILE << std::endl;
	}
	else
	{
		std::cerr << "Error saving data." << std::endl;
	}
}

void loadSavedBodies(std::vector<std::unique_ptr<CelestialBody>>& bodies)
{
	std::ifstream inFile(DATA_FILE);
	if (!inFile.is_open())
	{
		std::cerr << "No existing file." << std::endl;
		return;
	}

	std::string line;	
	while(std::getline(inFile, line))
	{
		std::cout << "Loaded: " << line << std::endl;
	}
	std::cout << "Loaded file. " << std::endl;
}


int main ()
{
	std::vector<std::unique_ptr<CelestialBody>> bodies;
	int choice = 0;
	
	loadSavedBodies(bodies);	
	
	std::ifstream inFile(DATA_FILE);
	if (!inFile.is_open())
	{
		std::cout << "Loading save data.\n";
		inFile.close();
	}
	
	while (true)
	{
		displayMainMenu();
		std::cin >> choice;
	
		switch(choice)
		{
			case 1: createGasGiant(bodies); break;
			case 2:	createRockyPlanet(bodies); break;
			case 3: createMoon(bodies); break;
			case 4: createGasRingPlanet(bodies); break;
			case 5: printAllBodies(bodies); break;
			case 6:
				saveAllData(bodies);
				std::cout  << "Existing data." << std::endl;
				return EXIT_SUCCESS;
				
				default:
				std::cout << "Invalid choice." << std::endl;
		}
	}
}
