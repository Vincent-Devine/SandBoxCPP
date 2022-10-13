#pragma once
 
#include "types.hpp"
#include "demo.hpp"
 
class DemoPolar : public Demo
{
public:
    DemoPolar();
    ~DemoPolar();
    const char* GetName() override { return "Polar Coordinates"; }
    void UpdateAndDraw() override;
 
private:
    const float2 origin = { 400, 225 };
    float angle = 80.f;
    float radius = 80.f;

    bool buttonPressed = false;
};