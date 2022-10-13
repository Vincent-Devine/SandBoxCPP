#include "Static_Ball.hpp"

#include "raylib.h"

Static_Ball::Static_Ball()
{
    radius = 10.f;
    position = {(float)rand() / RAND_MAX * 800, (float)rand() / RAND_MAX * 450};
    ballType = BT_STATIC;
}

Static_Ball::~Static_Ball()
{
}

void Static_Ball::UpdateAndDraw()
{
    DrawCircle(position.x, position.y, radius, GREEN);
}