#include <raylib.h>
#include "classes/Player.h"

int main(int argc, char **argv) {
    InitWindow(800, 600, "Braid");

    Player player(200, 200, 10, 10, 100);

    while (!WindowShouldClose()) {
        // update
        player.move();

        // draw
        BeginDrawing();
        {
            ClearBackground(BLACK);
            DrawFPS(10, 10);

            DrawRectangle(player.getX(), player.getY(), player.getWidth(), player.getHeight(), WHITE);

            DrawText("Hello World!", 100, 100, 20, WHITE);
        }
        EndDrawing();
    }

    return 0;
}
