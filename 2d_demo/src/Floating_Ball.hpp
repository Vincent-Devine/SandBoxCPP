#pragma once

#include "Ball.hpp"

class Floating_Ball : public Ball
{
private:
    Vector2D direction;
public:
    Floating_Ball();
    ~Floating_Ball();

    void UpdateAndDraw() override;
};


