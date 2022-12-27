#include "Player.h"
#include "raylib.h"

Player::Player(float x, float y, float speed) : Character(x, y, speed) {};

void Player::move() {
    if (IsKeyDown(KEY_UP)) {
        this->setY(this->getY() - this->getSpeed() * GetFrameTime());
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
