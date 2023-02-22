#ifndef __PLATLIST_H__
#define __PLATLIST_H__
#include "Song.h"
#include "Player.h"
#include <thread>

class Node{
    Node *prev, *next;
    Song song;
    Node(Song _song, Node *_prev, Node *_next){
        song = _song;
        prev = _prev;
        next = _next;
    }
};

class Playlist{
private:
    Node first;
    Node *now;
    Player player;
public:
    Playlist();
    void Play();
    void Pause();
    void AddSong(Song song);
    void Next();
};

#endif
