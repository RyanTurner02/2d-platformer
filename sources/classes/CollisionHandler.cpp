#include <cmath>
#include <iostream>
#include "CollisionHandler.h"
#include "Player.h"
#include "Platform.h"

void CollisionHandler::handlePlayerPlatform(Player *player, Platform platform) {
    // if the platform cannot be jumped through, prevent the player from moving towards it
    if (!platform.getCanJumpThrough()) {
        if (std::floor(player->getY()) < std::floor(platform.getY())) { // top
            player->setY(platform.getY() - player->getHeight());
            player->setVelocityY(100);
            player->setCanJump(true);
        } else if (std::floor(player->getY() + player->getHeight()) >
                   std::floor(platform.getY() + platform.getHeight())) { // bottom
            player->setVelocityY(player->getVelocityY() * -1);
        } else if (std::ceil(player->getX() + player->getWidth()) >=
                   std::floor(platform.getX() + platform.getWidth())) { // right
            player->setX(platform.getX() + platform.getWidth());
        } else if (player->getX() >= platform.getX() - player->getWidth()) { // left
            player->setX(platform.getX() - player->getWidth());
        }
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