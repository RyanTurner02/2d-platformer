#ifndef BRAID_PLATFORM_H
#define BRAID_PLATFORM_H

#include "raylib.h"

class Platform {
private:
    float x;
    float y;
    float width;
    float height;

public:
    Platform(float x, float y, float width, float height);

    float getX();

    void setX(float x);

    float getY();

    void setY(float y);

    float getWidth();

    void setWidth(float width);

    float getHeight();

    void setHeight(float height);

    Rectangle toRectangle();
};


#endif //BRAID_PLATFORM_H
