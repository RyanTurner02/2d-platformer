#ifndef BRAID_COLLISIONHANDLER_H
#define BRAID_COLLISIONHANDLER_H

#include "raylib.h"
#include "Player.h"
#include "Platform.h"

class CollisionHandler {
public:
    void handlePlayerPlatform(Player *player, Platform platform);
};

#endif //BRAID_COLLISIONHANDLER_H
