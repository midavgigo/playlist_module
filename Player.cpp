#include "Player.h"
#include <thread>
#include <chrono>

Player::Player(Playlist *pl){
    playlist = pl;
    song = playlist->getNow();
    player_t = std::thread(&Player::run, this);
}

void Player::run(){
    while(true){
        std::cout<<song.getName()<<" is playing\n";
        int n = song.getDuration();
        for(int i = 1; i <= n && !pause; i+=step){
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            std::cout<<"\r";
            int border = 50*((double)i/(double)song.getDuration());
            for(int j = 0; j < 50; j++){
                if(j <= border){
                    std::cout<<"#";
                }else{
                     std::cout<<"-";
                }
            }
            std::cout<<"|"<<i;
        }
        std::cout<<"\n"<<song.getName()<<" is ended\n";
        if(!pause){
            playlist->Next();
            song = playlist->getNow();
        }
        if(can_rep){
            pause = false;
        }
    }
}

void Player::setState(bool play){
    step = play;
}

bool Player::getState(){
    return step;
}

void Player::Next(){
    can_rep = false;
    pause = true;
    playlist->Next();
    song = playlist->getNow();
    can_rep = true;
}

void Player::Prev(){
    can_rep = false;
    pause = true;
    playlist->Prev();
    song = playlist->getNow();
    can_rep = true;
}

void Player::stop(){
    player_t.detach();
}
