#include "Player.h"
#include <thread>
#include <chrono>
Player::Player(){
    start();
}

void Player::run(){
    waiting = false;
    for(int i = 0; i < song->getDuration(); i+=step){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    waiting = true;
}

void Player::start(){
    std::thread player_t((void (*)())&run);
    player_t.detach();
}

void Player::setState(bool play){
    step = play;
}

bool Player::getState(){
    return step;
}
