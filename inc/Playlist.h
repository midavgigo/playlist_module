#ifndef __PLATLIST_H__
#define __PLATLIST_H__
#include "Song.h"
#include <thread>
#include "DLL.h"

class Playlist{
protected:
    DoubleLinkedList<Song> dll;
public:
    Playlist(Song song);
    void AddSong(Song song);
    void Next();
    void Prev();
    Song getNow();
};

#endif
