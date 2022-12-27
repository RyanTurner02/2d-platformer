#ifndef BRAID_CHARACTER_H
#define BRAID_CHARACTER_H

class Character {
private:
    float x;
    float y;
    float speed;

public:
    Character(float x, float y, float speed);

    float getX();

    void setX(float x);

    float getY();

    void setY(float y);

    float getSpeed();

    void setSpeed(float speed);

    virtual void move() = 0;
};

#endif //BRAID_CHARACTER_H
