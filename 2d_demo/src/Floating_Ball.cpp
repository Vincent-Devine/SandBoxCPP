#include "Floating_Ball.hpp"

#include "raylib.h"

Floating_Ball::Floating_Ball()
{
    radius = 5.f;
    position = {(float)rand() / RAND_MAX * 800, (float)rand() / RAND_MAX * 450};
    direction = {((float)rand() / RAND_MAX - 0.5f) * 3.f, ((float)rand() / RAND_MAX - 0.5f) * 3.f};
    ballType = BT_FLOATING;
}

Floating_Ball::~Floating_Ball()
{
}

void Floating_Ball::UpdateAndDraw()
{
    if(position.x > 800.f || position.x < 0.f)
        direction.x *= -1.f;
    if(position.y > 450.f || position.y < 0.f)
        direction.y *= -1.f;

    position = {position.x + direction.x, position.y + direction.y};

    DrawCircle(position.x, position.y, radius, RED);
}