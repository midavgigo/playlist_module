#include "Player.h"
#include <thread>
#include <chrono>
Player::Player(){
    start();
}

void start(){
    std::thread player_t(run);
    player_t.detach();
}

void Player::run(){
    waiting = false;
    for(int i = 0; i < song->Duration; i+=step){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    waiting = true;
}

void Player::setState(bool play){
    step = play;
}

bool Player::getState(){
    return step;
}
