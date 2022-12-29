#include <cmath>
#include <iostream>
#include "CollisionHandler.h"
#include "Player.h"
#include "Platform.h"

void CollisionHandler::handlePlayerPlatform(Player *player, Platform platform) {
    // if the platform cannot be jumped through, prevent the player from moving towards it
    if (!platform.getCanJumpThrough()) {
        // if the player is between the left and right sides
        if (player->getX() >= platform.getX() - player->getWidth() &&
            player->getX() + player->getWidth() <= platform.getX() + platform.getWidth() + player->getWidth()) {
            // if the player is on the top
            if (player->getY() <= platform.getY()) {
                player->setY(platform.getY() - player->getHeight());
                player->setVelocityY(100);
                player->setCanJump(true);
            }
        }

        // if the player is between the top and bottom
        if (player->getY() + player->getHeight() > platform.getY() &&
            player->getY() < platform.getY() + platform.getHeight()) {
            // if the player is on the right
            if (player->getX() + player->getWidth() >= platform.getX() + platform.getWidth()) {
                player->setX(platform.getX() + platform.getWidth());
            }

            // if the player is on the left
            if (player->getX() - player->getWidth() <= platform.getX() - player->getWidth()) {
                player->setX(platform.getX() - player->getWidth());
            }
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