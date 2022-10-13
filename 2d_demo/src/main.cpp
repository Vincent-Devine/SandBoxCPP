#include <raylib.h>

#include "demo_lerp.hpp"
#include "demo_polar.hpp"
#include "demo_mini_game.hpp"

int main(void)
{
    const int screenWidth  = 800;
    const int screenHeight = 450;

    // TODO: Demo added here
    Demo* demoList[] = {
        new DemoLerp(),
        new DemoPolar(),
        new DemoMiniGame(),
    };

    const int count = sizeof(demoList) / sizeof(Demo*);
    int current = 0;

    SetConfigFlags(FLAG_VSYNC_HINT);
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText(TextFormat("%d/%d : %s", current+1, count, demoList[current]->GetName()), screenWidth / 2 - 50, 10, 20, BLACK);
        DrawFPS(10, 10);

        if (IsKeyPressed(KEY_LEFT))
            current -= 1;
        if (IsKeyPressed(KEY_RIGHT))
            current += 1;
        
        current = current % count;
        if (current < 0)
            current += count;

        demoList[current]->UpdateAndDraw();

        EndDrawing();
    }

    for (Demo* demo : demoList)
        delete demo;

    CloseWindow();

    return 0;
}