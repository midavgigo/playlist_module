#include "Playlist.h"
#include <cstdlib>

Playlist::Playlist(Song song){
    dll.AddData(song);
}

void Playlist::AddSong(Song song){
    dll.AddData(song);
}

Song Playlist::getNow(){
    return dll.getNow();
}

void Playlist::Next(){
    dll.Next();
}
void Playlist::Prev(){
    dll.Prev();
}
