#ifndef __PLATLIST_H__
#define __PLATLIST_H__
#include "Song.h"
#include <thread>

class Playlist;

class Node{
protected:
    Node *prev, *next;
    Song song;
    Node(Song _song, Node *_prev, Node *_next){
        song = _song;
        prev = _prev;
        next = _next;
    }
public:
    Node(){}
    Song getSong(){
        return song;
    }
    friend class Playlist;
};


class Playlist{
protected:
    Node first;
    Node *now;
public:
    Playlist(Song song);
    void AddSong(Song song);
    void Next();
    void Prev();
    Song getNow();
};

#endif
