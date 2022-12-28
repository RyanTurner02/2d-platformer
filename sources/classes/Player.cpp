#include "Player.h"
#include "raylib.h"

Player::Player(float x, float y, float width, float height, float speed) : Character(x, y, width, height, speed) {
    this->prevX = x;
    this->prevY = y;
    this->canJump = true;
};

void Player::move() {
    if (IsKeyDown(KEY_UP)) {
        // move player upwards
        this->setY(this->getY() - this->getVelocityY() * GetFrameTime());
        this->setVelocityY(this->getVelocityY() - 25 * GetFrameTime());
    } else {
        // move player downwards
        this->setY(this->getY() + this->getVelocityY() * GetFrameTime());
        this->setVelocityY(this->getVelocityY() + 25 * GetFrameTime());
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
