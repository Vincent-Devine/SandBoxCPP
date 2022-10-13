#include "demo_polar.hpp"

#include "raylib.h"
#include "my_math.h"
#include "my_type.h"

#include <iostream>

DemoPolar::DemoPolar() 
{
}

DemoPolar::~DemoPolar() 
{
}

void DemoPolar::UpdateAndDraw()
{
    DrawCircle(origin.x, origin.y, 5, BLACK);
    DrawLine(400, 225, 600, 225, BLACK);
    DrawText("100", 495, 235, 6, BLACK);
    DrawLine(500, 220, 500, 230, BLACK);
    DrawText("200", 595, 235, 6, BLACK);
    DrawTriangle({600, 220}, {600, 230}, {605, 225}, BLACK);

    float radAngle = angle * MY_PI / 180.f;

    Vector2D point = {radius * cosf(radAngle) + origin.x, radius * sinf(-radAngle) + origin.y};

    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
    {    
        if(buttonPressed)
            buttonPressed = false;
        else if(Math::CollisionPointCercle({{(float)GetMouseX(),(float)GetMouseY()}, 10}, point))
            buttonPressed = true;
    }

    if(buttonPressed)
    {
        radius = sqrtf(powf(GetMouseX() - origin.x,2) + powf(GetMouseY() - origin.y,2));
        if(radius > 200.f)
            radius = 200.f;

        if(point.x - origin.x > 0)
        {
            if(point.y - origin.y >= 0)
                angle = (atanf(-(GetMouseY() - origin.y) / (GetMouseX() - origin.x))) * 180 / MY_PI;
            else
                angle = (atanf(-(GetMouseY() - origin.y) / (GetMouseX() - origin.x)) + 2 * MY_PI) * 180 / MY_PI;
        }
        else
            angle = (atanf(-(GetMouseY() - origin.y) / (GetMouseX() - origin.x)) + MY_PI) * 180 / MY_PI;

        DrawCircle(point.x, point.y , 5, RED);
    }
    else
        DrawCircle(point.x, point.y , 5, BLACK);

    DrawLine(origin.x, origin.y, point.x, point.y, BLACK);
    DrawRectangle(GetScreenWidth() * 0.12f, GetScreenHeight() * 0.86f, 200.f * angle / 360, 10.f, GREEN);
    DrawRectangle(GetScreenWidth() * 0.12f, GetScreenHeight() * 0.93f, 200.f * radius / 360, 10.f, GREEN);
    DrawText(TextFormat("%0.3f", angle), GetScreenWidth() * 0.13f, GetScreenHeight() * 0.86f, 6 , BLACK);
    DrawText(TextFormat("%0.3f", radius), GetScreenWidth() * 0.13f, GetScreenHeight() * 0.93f, 6 , BLACK);
}