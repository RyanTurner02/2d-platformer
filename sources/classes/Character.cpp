#include "Character.h"

Character::Character(float x, float y, float width, float height, float speed) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->velocityX = 0; // initial horizontal velocity
    this->velocityY = 0; // initial vertical velocity
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

float Character::getWidth() {
    return width;
}

void Character::setWidth(float width) {
    this->width = width;
}

float Character::getHeight() {
    return height;
}

void Character::setHeight(float height) {
    this->height = height;
}

float Character::getVelocityX() {
    return velocityX;
}

void Character::setVelocityX(float velocityX) {
    this->velocityX = velocityX;
}

float Character::getVelocityY() {
    return velocityY;
}

void Character::setVelocityY(float velocityY) {
    this->velocityY = velocityY;
}

float Character::getSpeed() {
    return speed;
}

void Character::setSpeed(float speed) {
    this->speed = speed;
}
