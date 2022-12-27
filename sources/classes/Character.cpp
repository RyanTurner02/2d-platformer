#include "Character.h"

Character::Character(int x, int y, int speed) {
    this->x = x;
    this->y = y;
    this->speed = speed;
}

int Character::getX() {
    return x;
}

void Character::setX(int x) {
    this->x = x;
}

int Character::getY() {
    return y;
}

void Character::setY(int y) {
    this->y = y;
}

int Character::getSpeed() {
    return speed;
}

void Character::setSpeed(int speed) {
    this->speed = speed;
}
