#include "Character.h"

Character::Character(float x, float y, float speed) {
    this->x = x;
    this->y = y;
    this->speed = speed;
}

float Character::getX() {
    return x;
}

void Character::setX(float x) {
    this->x = x;
}

float Character::getY() {
    return y;
}

void Character::setY(float y) {
    this->y = y;
}

float Character::getSpeed() {
    return speed;
}

void Character::setSpeed(float speed) {
    this->speed = speed;
}
