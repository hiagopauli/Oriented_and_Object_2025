#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "song.h"
#include <memory>
#include <string>

const int MAX_SONG = 50;

class Playlist
{
	private:
		static const int MAX_SONG = 50;
		std::unique_ptr<Song>	songs[MAX_SONG];
		int songCount;
		int loadedSongCount;
	
	public:
		Playlist();

		void addSong(std::unique_ptr<Song> newSong);
		void showPlaylist() const;
		void saveToFile(const std::string& filename);
		void loadFromFile(const std::string& filename);

};

#endif


