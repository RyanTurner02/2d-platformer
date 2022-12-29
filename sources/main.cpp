#include <iostream>
#include <raylib.h>

#include "classes/Player.h"
#include "classes/Platform.h"
#include "classes/CollisionHandler.h"

int main(int argc, char **argv) {
    InitWindow(800, 600, "Braid");

    SetTargetFPS(60);

    Player player(200, 0, 10, 10, 100);
    Platform platform(100, 300, 200, 25, true);

    while (!WindowShouldClose()) {
        // update
        player.move();

        CollisionHandler collisionHandler;

        // check if there is a collision between the player and rectangle
        if (CheckCollisionRecs(player.toRectangle(), platform.toRectangle())) {
            collisionHandler.handlePlayerPlatform(&player, platform);
        }

        // update previous player coordinates
        player.setPrevX(player.getX());
        player.setPrevY(player.getY());

        // draw
        BeginDrawing();
        {
            ClearBackground(BLACK);
            DrawFPS(10, 10);

            DrawRectangleRec(platform.toRectangle(), BLUE);
            DrawRectangleRec(player.toRectangle(), WHITE);

            DrawText("Hello World!", 100, 100, 20, WHITE);
        }
        EndDrawing();
    }

    return 0;
}
