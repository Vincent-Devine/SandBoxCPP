#pragma once

#include "Ball.hpp"

class Static_Ball : public Ball
{
private:
    
public:
    Static_Ball();
    ~Static_Ball();

    void UpdateAndDraw() override;
};


