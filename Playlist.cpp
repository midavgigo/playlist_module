#include "Playlist.h"
#include <cstring>

Playlist::Playlist(char *_name, Song song){
    std::strcpy(name, _name);
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

char const *Playlist::getName(){
    return name;
}
