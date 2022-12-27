#ifndef BRAID_PLAYER_H
#define BRAID_PLAYER_H

#include "Character.h"

class Player : public Character {
public:
    Player(float x, float y, float speed);

    void move() override;
};

#endif //BRAID_PLAYER_H
