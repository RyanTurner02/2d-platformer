#ifndef BRAID_PLAYER_H
#define BRAID_PLAYER_H

#include "Character.h"
#include "raylib.h"

class Player : public Character {
private:
    float prevX;
    float prevY;

public:
    Player(float x, float y, float width, float height, float speed);

    float getPrevX();

    void setPrevX(float prevX);

    float getPrevY();

    void setPrevY(float prevY);

    void move() override;

    Rectangle toRectangle();
};

#endif //BRAID_PLAYER_H
