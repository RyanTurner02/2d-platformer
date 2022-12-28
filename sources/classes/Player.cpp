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
    // add a limit to positive and negative vertical velocity
    if (this->getVelocityY() >= GRAVITY) {
        this->setVelocityY(GRAVITY);
    } else if (this->getVelocityY() <= -GRAVITY) {
        this->setVelocityY(-GRAVITY);
    }

    std::cout << this->getVelocityY() << std::endl;

    if (IsKeyDown(KEY_UP)) {
        // move player upwards
        this->setY(this->getY() - this->getVelocityY() * GetFrameTime());
        this->setVelocityY(this->getVelocityY() - GRAVITY * GetFrameTime());
    } else {
        // move player downwards
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
