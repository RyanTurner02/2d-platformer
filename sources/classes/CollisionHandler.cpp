#include <cmath>
#include "CollisionHandler.h"
#include "Player.h"
#include "Platform.h"

void CollisionHandler::handlePlayerPlatform(Player *player, Platform platform) {
    // if the platform cannot be jumped through, prevent the player from moving forwards
    if (!platform.getCanJumpThrough()) {
        player->setX(player->getPrevX());
        player->setY(player->getPrevY());
        return;
    }

    // if the player is on top of the platform, make them stay on top of it
    if (std::floor(player->getY() + player->getHeight()) <= platform.getY()) {
        player->setX(player->getX());
        player->setY(platform.getY() - player->getHeight());
        return;
    }
}
