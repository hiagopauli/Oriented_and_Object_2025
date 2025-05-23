#include "playlist.h"
#include <iostream>
#include <fstream>


Playlist::Playlist() : songCount(0), loadedSongCount(0)
{
	loadFromFile("playlist.txt");
}

void Playlist::addSong(std::unique_ptr<Song> Song)
{
	if (songCount < MAX_SONG)
	{
		songs[songCount] = std::move(Song);
		songCount++;
		std::cout << "Song added on playlist." << std::endl;
	}
	else 
	{
		std::cout << "The playlist is already fully." << std::endl;
	}

}

void Playlist::showPlaylist() const
{
	if (songCount == 0)
	{
		std::cout << "Dont have music on playlist." << std::endl;
		return;
	}

	std::cout << "Playlist: " << std::endl << std::endl;
	for (int i = 0; i < songCount; ++i)
	{
		songs[i]->display();
		std::cout << "____________________________" << std::endl;
	}
}

void Playlist::saveToFile(const std::string& filename)
{
	std::ofstream outFile(filename);
	for	(int i = 0; i < songCount; ++i)
	{
		outFile << songs[i]->getTitle    () 	<< std::endl;
		outFile << songs[i]->getArtist   () 	<< std::endl;
		outFile << songs[i]->getDuration () 	<< std::endl;
	}
	
	outFile.close();
	std::cout << "Playlist saved." << std::endl;

}

void Playlist::loadFromFile(const std::string& filename)
{
	std::ifstream inFile(filename);
	if (!inFile.is_open()) 
	return;

	std::string title, artist;
	double duration;
		
	while 
	(std::getline(inFile, title) &&
 	 std::getline(inFile, artist) &&
   (inFile >> duration))

	{
		inFile.ignore();
		auto newSong = std::make_unique<Song>(title, artist, duration);
		addSong(std::move(newSong));
	}

	inFile.close();
	std::cout << "Playlist loaded.";
	
}


