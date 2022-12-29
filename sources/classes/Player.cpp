#include <iostream>

#include "Player.h"
#include "raylib.h"

const float GRAVITY = 100;

Player::Player(float x, float y, float width, float height, float speed) : Character(x, y, width, height, speed) {
    this->prevX = x;
    this->prevY = y;
    this->canJump = true;
};

void Player::move() {
    std::cout << this->getVelocityY() << std::endl;

    if (IsKeyDown(KEY_UP)) {
        this->canJump = false;
    }

    if (!canJump) { // move upwards if the player has jumped
        this->setY(this->getY() - this->getVelocityY() * GetFrameTime());
        this->setVelocityY(this->getVelocityY() - GRAVITY * GetFrameTime());
    } else { // move downwards if the player is on a platform
        this->setY(this->getY() + this->getVelocityY() * GetFrameTime());
        this->setVelocityY(this->getVelocityY() + GRAVITY * GetFrameTime());
    }

    if (IsKeyDown(KEY_DOWN)) {
        this->setY(this->getY() + this->getSpeed() * GetFrameTime());
    }

    if (IsKeyDown(KEY_LEFT)) {
        this->setX(this->getX() - this->getSpeed() * GetFrameTime());
    }

    if (IsKeyDown(KEY_RIGHT)) {
        this->setX(this->getX() + this->getSpeed() * GetFrameTime());
    }
}

float Player::getPrevX() {
    return prevX;
}

void Player::setPrevX(float prevX) {
    this->prevX = prevX;
}

float Player::getPrevY() {
    return prevY;
}

void Player::setPrevY(float prevY) {
    this->prevY = prevY;
}

bool Player::getCanJump() {
    return canJump;
}

void Player::setCanJump(bool canJump) {
    this->canJump = canJump;
}

Rectangle Player::toRectangle() {
    return Rectangle{this->getX(), this->getY(), this->getWidth(), this->getHeight()};
}
