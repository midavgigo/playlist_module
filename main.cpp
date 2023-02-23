#include "Playlist.h"
#include "Song.h"
#include "Player.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <fstream>
#include <cstring>

int main(){
	char *a = "a", *b = "b", *c = "c";
	Song song(a, 100);
	Playlist pl(song);
	Player pr(&pl);
	pr.setState(true);
	for(int i = 0; i >= 0; i++){
	}
	pr.stop();
	return 0;
}
