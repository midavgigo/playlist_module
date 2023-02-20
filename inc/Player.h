#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "Song.h"


class Player{
public:
    Player();
    void setSong(Song *song);
    void setState(bool play);
    bool getState();
private:
    void start();
    short step = 1;
    void run();
    Song *song;
    bool waiting = true;
};

#endif
