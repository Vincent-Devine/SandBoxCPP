#pragma once

#include "my_type.h"
#include "my_math.h"

enum BallType
{
    BT_FLOATING,
    BT_STATIC
};

class Ball
{
protected:
    Vector2D position;
    float radius = 1.f;
    BallType ballType;

public:
    virtual ~Ball() {}

    virtual void UpdateAndDraw() = 0;

    Vector2D GetPosition() const
    {
        return position;
    }

    void SetPosition(const Vector2D newPosition)
    {
        position = newPosition;
    }

    float GetRadius() const
    {
        return radius;
    }

    void SetRadius(const float newRadius)
    {
        radius = newRadius;
    }

    BallType GetBallType() const
    {
        return ballType;
    }

    void SetBallType(const BallType newBallType)
    {
        ballType = newBallType;
    }
};