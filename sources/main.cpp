#include <iostream>
#include <raylib.h>

int main(int argc, char **argv) {
    InitWindow(800, 600, "Braid");

    while (!WindowShouldClose()) {
        // update

        // draw
        BeginDrawing();
        {
            ClearBackground(BLACK);
            DrawFPS(10, 10);
            DrawText("Hello World!", 100, 100, 20, WHITE);
        }
        EndDrawing();
    }

    return 0;
}
