#ifndef __SONG_H__
#define __SONG_H__
#include <cstring>

class Song{
private:
    int Duration;
    char name[255] = "ERROR NAME OF SONG";
public:
    Song(char *_name, int duration);
    int getDuration();
    char const *getName();
    Song(){}
};

#endif
