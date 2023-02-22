#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "Song.h"
#include <thread>


class Player{
public:
    Player(){}
    void start();
    void setSong(Song *song);
    void setState(bool play);
    void stop();
    bool getState();
private:
    short step = 0;
    void run();
    Song *song = nullptr;
    bool working = true;
};

#endif
