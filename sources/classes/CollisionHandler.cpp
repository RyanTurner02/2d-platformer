#include <cmath>
#include <iostream>
#include "CollisionHandler.h"
#include "Player.h"
#include "Platform.h"

void CollisionHandler::handlePlayerPlatform(Player *player, Platform platform) {
    // if the platform cannot be jumped through, prevent the player from moving forwards
    if (!platform.getCanJumpThrough()) {
        return;
    }

    // if the player is on top of the platform, make them stay on top of it
    if (player->getY() + player->getHeight() >= platform.getY()) {
            player->setY(platform.getY() - player->getHeight());
            player->setVelocityY(100);
            player->setCanJump(true);
        return;
    }
}