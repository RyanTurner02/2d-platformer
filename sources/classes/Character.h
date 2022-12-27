#ifndef BRAID_CHARACTER_H
#define BRAID_CHARACTER_H

class Character {
private:
    int x;
    int y;
    int speed;

public:
    Character(int x, int y, int speed);

    int getX();

    void setX(int x);

    int getY();

    void setY(int y);

    int getSpeed();

    void setSpeed(int speed);

    virtual void move() = 0;
};

#endif //BRAID_CHARACTER_H
