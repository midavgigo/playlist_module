#include "Player.h"
#include <thread>
#include <chrono>

void Player::start(){

        std::thread player_t((void (*)())&Player::run);
        player_t.join();
}

void Player::run(){
    while(working){
        if(song != nullptr){
            for(int i = 0; i < song->getDuration(); i+=step){
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
            }
        }
    }
}

void Player::setState(bool play){
    step = play;
}

bool Player::getState(){
    return step;
}

void Player::stop(){
    working = false;
}
