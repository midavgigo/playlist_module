#include <iostream>
#include "Playlist.h"
#include "Song.h"

int main(){
	char *a = "a", *b = "b", *c = "c";
	Song song(a, 100);
	Playlist pl(song);
	pl.AddSong(Song(b, 100));
	pl.AddSong(Song(c, 100));
	for(int i = 0; i < 10; i++){
		std::cout<<pl.getNow().getName()<<"\n";
		pl.Next();
	}
	return 0;
}
