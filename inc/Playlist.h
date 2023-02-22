#ifndef __PLATLIST_H__
#define __PLATLIST_H__
#include "Song.h"
#include "Player.h"
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
private:
    Node first;
    Node *now;
    Player player;
public:
    Playlist(Song song);
    void Play();
    void Pause();
    void AddSong(Song song);
    void Next();
    Song getNow();
};

#endif
