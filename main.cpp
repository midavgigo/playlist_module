#include <iostream>
#include "Playlist.h"
#include "Song.h"

int main(){
	char *name = "a";
	Song song(name, 100);
	Playlist pl(song);
	for(int i = 0; i < 10; i++){
		std::cout<<pl.getNow().getName()<<"\n";
	}
	return 0;
}
