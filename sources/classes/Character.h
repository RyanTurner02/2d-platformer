#ifndef BRAID_CHARACTER_H
#define BRAID_CHARACTER_H

class Character {
private:
    float x;
    float y;
    float width;
    float height;
    float velocityY;
    float speed;

public:
    Character(float x, float y, float width, float height, float speed);

    float getX();

    void setX(float x);

    float getY();

    void setY(float y);

    float getWidth();

    void setWidth(float width);

    float getHeight();

    void setHeight(float height);

    float getVelocityY();

    void setVelocityY(float velocityY);

    float getSpeed();

    void setSpeed(float speed);

    virtual void move() = 0;
};

#endif //BRAID_CHARACTER_H
