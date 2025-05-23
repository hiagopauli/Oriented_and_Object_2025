#include <iostream>
#include <memory>
#include <string>
#include "playlist.h"
#include "song.h"

int main()
{
	Playlist myPlaylist;
	myPlaylist.loadFromFile("playlist.txt");

	int choice;

	do
	{
		std::cout << "--------------------------------" 							<< std::endl;
		std::cout << "Press 1 if you want add song on the playlist."	<< std::endl;
		std::cout << "Press 2 if you want see playlist." 							<< std::endl;
		std::cout << "Press 0 to close."                          		<< std::endl;
		std::cin  >> choice;

		std::cin.ignore();
		
		if (choice == 1)
		{
			std::string title, artist;
			double duration;

			std::cout << "Write the song litle: "   		<< std::endl;
			std::getline(std::cin, title);

			std::cout << "Write the artist name: "  		<< std::endl;
			std::getline(std::cin, artist);

			std::cout << "Write the duration of song: " <<  std::endl;
			std::cin.ignore();

			auto newSong = std::make_unique<Song>(title, artist, duration);
			myPlaylist.addSong(std::move(newSong));

		}
		else if (choice == 2)
		{
			myPlaylist.showPlaylist();
		}
	}	
	while (choice != 0);
	
	myPlaylist.saveToFile("playlist.txt");

	return EXIT_SUCCESS;
}
