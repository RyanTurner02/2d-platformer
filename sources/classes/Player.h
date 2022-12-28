#ifndef BRAID_PLAYER_H
#define BRAID_PLAYER_H

#include "Character.h"
#include "raylib.h"

class Player : public Character {
private:
    float prevX;
    float prevY;
    bool canJump;

public:
    Player(float x, float y, float width, float height, float speed);

    float getPrevX();

    void setPrevX(float prevX);

    float getPrevY();

    void setPrevY(float prevY);

    void move() override;

    bool getCanJump();

    void setCanJump(bool canJump);

    Rectangle toRectangle();
};

#endif //BRAID_PLAYER_H
