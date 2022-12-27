#ifndef BRAID_PLAYER_H
#define BRAID_PLAYER_H

#include "Character.h"
#include "raylib.h"

class Player : public Character {
public:
    Player(float x, float y, float width, float height, float speed);

    void move() override;

    Rectangle toRectangle();
};

#endif //BRAID_PLAYER_H
