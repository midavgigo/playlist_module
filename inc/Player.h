#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "Song.h"
#include <thread>


class Player{
public:
    Player();
    void setSong(Song *song);
    void setState(bool play);
    bool getState();
private:
    void start();
    short step = 0;
    void run();
    Song *song;
    bool waiting = true;
};

#endif
