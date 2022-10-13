#include "demo_lerp.hpp"

#include "raylib.h"
#include "my_math.h"
#include "my_type.h"

#include <iostream>

DemoLerp::DemoLerp() 
{
}

DemoLerp::~DemoLerp() 
{
}

const char* DemoLerp::GetName()
{
    return "Lerp"; 
}

void DemoLerp::UpdateAndDraw()
{
    if(pointSelected == 0)
        DrawCircle(points[0].x, points[0].y, 5, RED);
    else
        DrawCircle(points[0].x, points[0].y, 5, BLACK);
    if(pointSelected == 1)
        DrawCircle(points[1].x, points[1].y, 5, RED);
    else
        DrawCircle(points[1].x, points[1].y, 5, BLACK);
    DrawLine(points[0].x, points[0].y, points[1].x, points[1].y, BLACK);
    DrawCircle(((points[0].x + points[1].x) / 2), ((points[0].y + points[1].y) / 2), 5, BLACK);

    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
    {
        if(buttonPressed)
        {
            pointSelected = -1;
            buttonPressed = false;
        }  
        else if(Math::CollisionPointCercle({{(float)GetMouseX(),(float)GetMouseY()}, 10}, {points[0].x, points[0].y}))
        {
            pointSelected = 0;
            buttonPressed = true;
        }
        else if(Math::CollisionPointCercle({{(float)GetMouseX(),(float)GetMouseY()}, 10}, {points[1].x, points[1].y}))
        {
            pointSelected = 1;
            buttonPressed = true;
        }
    }

    if(buttonPressed)
    {
        if(pointSelected == 0)
        {
            points[0].x = GetMouseX();
            points[0].y = GetMouseY();
        }
        else if(pointSelected == 1)
        {
            points[1].x = GetMouseX();
            points[1].y = GetMouseY();
        }
    }

    Vector2D movePoint {points[0].x * time + points[1].x * (1 - time), points[0].y * time + points[1].y * (1 - time)};
    if(time > 1.f)
        factor = -1;
    else if(time < 0.f)
        factor = 1;
    time+=0.005f * factor;
    DrawCircle(movePoint.x, movePoint.y, time * (1 - time) * 100.f, GREEN);
}