#include <iostream>
#include <raylib.h>

#include "classes/Player.h"
#include "classes/Platform.h"

int main(int argc, char **argv) {
    InitWindow(800, 600, "Braid");

    Player player(200, 200, 10, 10, 100);
    Platform platform(100, 300, 200, 50, true);

    while (!WindowShouldClose()) {
        // update
        player.move();

        // check if there is a collision between the player and rectangle
        if (CheckCollisionRecs(player.toRectangle(), platform.toRectangle())) {
            // if the platform can be jumped through
            // and the player's y-coordinate is greater than the platform's y-coordinate
            if (platform.getCanJumpThrough()) {
                if (player.getY() <= platform.getY()) {
                    player.setX(player.getPrevX());
                    player.setY(platform.getY() - player.getHeight());
                }
            } else {
                // prevent the player from moving forwards
                player.setX(player.getPrevX());
                player.setY(player.getPrevY());
            }
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
