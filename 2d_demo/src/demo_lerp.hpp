#pragma once

#include "types.hpp"
#include "demo.hpp"

class DemoLerp : public Demo
{
public:
    DemoLerp();
    ~DemoLerp();
    const char* GetName() override;

    void UpdateAndDraw() override;

private:
    int pointSelected = -1;
    bool buttonPressed = false;
    float time = 0.f; 
    int factor = 1;
    float2 points[2] = {
        {  50,  50 },
        { 550, 350 }
    };
};