#include "demo_mini_game.hpp"

#include <iostream>

#include "raylib.h"
#include "my_math.h"
#include "my_type.h"
#include "UI.hpp"

#include "Floating_Ball.hpp"
#include "Static_Ball.hpp"

DemoMiniGame::DemoMiniGame() 
{
}

DemoMiniGame::~DemoMiniGame() 
{
}

void DemoMiniGame::UpdateAndDraw()
{
    for(Ball* ball : balls)
    {
        ball->UpdateAndDraw();

        // Coliding
        for(int i = 0; i < (int)balls.size(); i++)
        {
            if(i+1 < (int)balls.size() && ball->GetBallType() == BT_FLOATING && balls[i]->GetBallType() == BT_STATIC &&
            Math::collisionCircleCircle(
                {ball->GetPosition() ,ball->GetRadius()},
                {balls[i]->GetPosition() ,balls[i]->GetRadius()}))
                balls.erase(balls.begin() + i);
        }
    }

    if(UI::drawButton("Add floating Ball", GetScreenWidth() * 0.12f, GetScreenHeight() * 0.80f, 100.f, 20.f))
    {
        Floating_Ball* floatingBall = new Floating_Ball;
        balls.push_back(floatingBall);
    }

    if(UI::drawButton("Add static Ball", GetScreenWidth() * 0.12f, GetScreenHeight() * 0.86f, 100.f, 20.f))
    {
        Static_Ball* staticBall = new Static_Ball;
        balls.push_back(staticBall);
    }

    if(UI::drawButton("Clear", GetScreenWidth() * 0.12f, GetScreenHeight() * 0.93f, 100.f, 20.f))
    {
        balls.clear();
    }
}