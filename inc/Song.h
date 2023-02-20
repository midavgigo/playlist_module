#ifndef __SONG_H__
#define __SONG_H__
#include <cstring>

class Song{
    int Duration;
public:
    char name[255];
    Song(char *_name, int duration);
    int getDuration();
};

#endif
