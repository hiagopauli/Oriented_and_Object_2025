#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>


class Song
{
	private:
		std::string artist;
		std::string title;
		double duration;

	
	public:
		Song();
		Song(const std::string& artist, const std::string& title, double duration);

		std::string getTitle() const;
		std::string getArtist() const;
		double getDuration() const;
	
		void display() const;	
};
	
#endif
