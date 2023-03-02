#ifndef __PLATLIST_H__
#define __PLATLIST_H__
#include "Song.h"
#include <thread>
#include "DLL.h"

class Playlist{
protected:
    DoubleLinkedList<Song> dll;
    char name[255] = "ERROR NAME OF PLAYLIST";
public:
    Playlist(){}
    Playlist(char *_name, Song song);
    void AddSong(Song song);
    void Next();
    void Prev();
    Song getNow();
    char const *getName();
};

#endif
