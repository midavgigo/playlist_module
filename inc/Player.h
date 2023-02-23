#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "Song.h"
#include <thread>
#include "Playlist.h"
#include <iostream>

class Player{
public:
    Player(Playlist *pl);
    void setState(bool play);
    bool getState();

    void Next();
    void Prev();
    void stop();
protected:
    Playlist *playlist;
    std::thread player_t;
    short step = 0;
    void run();
    Song song;
    bool pause = false;
    bool can_rep = false;
};

#endif
