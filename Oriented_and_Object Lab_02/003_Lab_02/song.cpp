#include "song.h"
#include <iostream>


Song::Song() : title(), artist(), duration()
{
}

Song::Song(const std::string& title,const std::string& artist, double duration):
	title(title), artist(artist), duration(duration)
{
}

std::string Song::getTitle() const 
{
	return title;
}

std::string Song::getArtist() const
{
	return artist;
}

double Song::getDuration() const
{
	return duration;
}


void Song::display() const
{
	std::cout << "Title: " 								 << title   << std::endl;
	std::cout << "Artist: "							 	 << artist  << std::endl;
	std::cout << "Duration: "	 << duration << "min"   << std::endl;

}
