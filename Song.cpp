#include "Song.h"

Song::Song(char *_name, int duration): Duration(duration){
    std::strcpy(name, _name);
}

int Song::getDuration(){
    return Duration;
}
