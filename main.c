#include "raylib.h"

int main() {
    const int ScreenHeight = 600;
    const int ScreenWidth = 800;
    int SquareX = 400;
    int SquareY = 300;
    int SquareSize = 100;
    int SpeedX = 2;
    int SpeedY = 2;
    SetTargetFPS(60);
    InitWindow(ScreenWidth, ScreenHeight, "DVD Screen Saver");
    while (!WindowShouldClose())
    {
        SquareX += SpeedX;
        SquareY += SpeedY;

        if (SquareX <= 0 || SquareX + SquareSize >= ScreenWidth) {
            SpeedX *= -1;
        }
        if (SquareY <= 0 || SquareY + SquareSize >= ScreenHeight) {
            SpeedY *= -1;
        }

        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(SquareX, SquareY, SquareSize, SquareSize, WHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
