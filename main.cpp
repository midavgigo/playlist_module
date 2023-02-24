#include <iostream>
#include "Song.h"
#include "Playlist.h"
#include "Player.h"
#include <chrono>
#include <thread>


int main(){
    char *a = "a", *b = "b";
    Song sng(a, 100);
    Song snog(b, 100);
    Playlist pl(sng);
    pl.AddSong(snog);
    Player pla;
    pla.setPlaylist(&pl);
    pla.setState(true);
    while(true){}
    pla.stop();
    return 0;
}
