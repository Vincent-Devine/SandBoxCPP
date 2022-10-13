#pragma once

#include <vector>

#include "types.hpp"
#include "demo.hpp"

#include "Ball.hpp"
 
class DemoMiniGame : public Demo
{
public:
    DemoMiniGame();
    ~DemoMiniGame();
    const char* GetName() override { return "Mini Game"; }
    void UpdateAndDraw() override;
 
private:
    std::vector<Ball*> balls;

    bool addFloatingBall = false;
    bool addStaticBall = false;
};