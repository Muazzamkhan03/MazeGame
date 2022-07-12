# include "player.h"

Player::Player(){
    Posx = 1; // Posx increases as we go far from the top right corner of our screen  (Cartesian coordinate system)
    Posy = 0; // Posy increases as we go down from the top right corner of our screen 
}

int Player::getX(){
    return this->Posx;
}

int Player::getY(){
    return this->Posy;
}

void Player::incX(){
    Posx++;
}

void Player::incY(){
    Posy++;
}

void Player::decX(){
    Posx--;
}

void Player::decY(){
    Posy--;
}