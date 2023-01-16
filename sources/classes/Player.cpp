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
    if (IsKeyPressed(KEY_SPACE)) {
        this->canJump = false;
    }

    if (!canJump) { // move upwards if the player has jumped
        this->setY(this->getY() - this->getVelocityY() * GetFrameTime());
        this->setVelocityY(this->getVelocityY() - GRAVITY * GetFrameTime());
    } else { // move downwards if the player is on a platform
        this->setY(this->getY() + this->getVelocityY() * GetFrameTime());
        this->setVelocityY(this->getVelocityY() + GRAVITY * GetFrameTime());
    }

    std::cout << this->getVelocityX() << std::endl;

    if (IsKeyDown(KEY_LEFT)) {
        if (this->getVelocityX() > 0) {
            this->setVelocityX(-100);
        } else {
            this->setVelocityX(this->getVelocityX() - 5);
        }
        this->setX(this->getX() + this->getVelocityX() * GetFrameTime());
    } else if (IsKeyDown(KEY_RIGHT)) {
        if (this->getVelocityX() < 0) {
            this->setVelocityX(100);
        } else {
            this->setVelocityX(this->getVelocityX() + 5);
        }
        this->setX(this->getX() + this->getVelocityX() * GetFrameTime());
    } else {
        if (this->getVelocityX() <= 0) {
            this->setVelocityX(0);
        }
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
