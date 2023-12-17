#include "Platform.h"
#include "raylib.h"

Platform::Platform(float x, float y, float width, float height) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->canJumpThrough = false;
}

Platform::Platform(float x, float y, float width, float height, bool canJumpThrough) : Platform(x, y, width, height) {
    this->canJumpThrough = canJumpThrough;
}

float Platform::getX() {
    return x;
}

void Platform::setX(float x) {
    this->x = x;
}

float Platform::getY() {
    return y;
}

void Platform::setY(float y) {
    this->y = y;
}

float Platform::getWidth() {
    return width;
}

void Platform::setWidth(float width) {
    this->width = width;
}

float Platform::getHeight() {
    return height;
}

void Platform::setHeight(float height) {
    this->height = height;
}

bool Platform::getCanJumpThrough() {
    return canJumpThrough;
}

void Platform::setCanJumpThrough(bool canJumpThrough) {
    this->canJumpThrough = canJumpThrough;
}

Rectangle Platform::toRectangle() {
    return Rectangle{x, y, width, height};
}
