#ifndef BRAID_PLATFORM_H
#define BRAID_PLATFORM_H

#include "raylib.h"

class Platform {
private:
    float x;
    float y;
    float width;
    float height;
    bool canJumpThrough;

public:
    Platform(float x, float y, float width, float height);

    Platform(float x, float y, float width, float height, bool canJumpThrough);

    float getX();

    void setX(float x);

    float getY();

    void setY(float y);

    float getWidth();

    void setWidth(float width);

    float getHeight();

    bool getCanJumpThrough();

    void setCanJumpThrough(bool canJumpThrough);

    void setHeight(float height);

    Rectangle toRectangle();
};

#endif //BRAID_PLATFORM_H
