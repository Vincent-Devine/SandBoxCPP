#ifndef MY_MATH_H
#define MY_MATH_H

#include <cmath>

#include "my_type.h"

namespace Math
{
//------------------------------------------------------------------------------------------------
//--------------------------------------- Vector2D struct ----------------------------------------
//------------------------------------------------------------------------------------------------
    Vector2D operator+(const Vector2D left, const Vector2D right)
    {
        return {left.x + right.x, left.y + right.y};
    }

    Vector2D operator-(const Vector2D left, const Vector2D right)
    {
        return {left.x - right.x, left.y - right.y};
    }

    Vector2D operator*(const Vector2D left, const Vector2D right)
    {
        return {left.x * right.x, left.y * right.y};
    }

    Vector2D operator/(const Vector2D left, const Vector2D right)
    {
        return {left.x / right.x, left.y / right.y};
    }

    Vector2D& operator+=(Vector2D& left, const Vector2D right)
    {
        left = left + right;
        return left;
    }

    Vector2D& operator-=(Vector2D& left, const Vector2D right)
    {
        left = left - right;
        return left;
    }

    Vector2D& operator*=(Vector2D& left, const Vector2D right)
    {
        left = left * right;
        return left;
    }

    Vector2D& operator/=(Vector2D& left, const Vector2D right)
    {
        left = left / right;
        return left;
    }

//------------------------------------------------------------------------------------------------
//----------------------------------- CartesianLine2D struct -------------------------------------
//------------------------------------------------------------------------------------------------
    CartesianLine2D slopeInterceptToCartesianLine2D(SlopeInterceptLine2D slopeIntercept);

//------------------------------------------------------------------------------------------------
//-------------------------------- SlopeInterceptLine2D struct -----------------------------------
//------------------------------------------------------------------------------------------------
    SlopeInterceptLine2D cartesianLineToSlopeInterceptLine2D(CartesianLine2D cartesianLine);

//------------------------------------------------------------------------------------------------
//------------------------------------ VectorLine2D struct ---------------------------------------
//------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------
//-------------------------------------- Circle2D struct -----------------------------------------
//------------------------------------------------------------------------------------------------
    float calculateAreaCircle2D(Circle2D circle);

//------------------------------------------------------------------------------------------------
//------------------------------------- Triangle2D struct ----------------------------------------
//------------------------------------------------------------------------------------------------
    float calculateAreaTriangle2D(Triangle2D triangle);


//------------------------------------------------------------------------------------------------
//------------------------------------- Rectangle2D struct ---------------------------------------
//------------------------------------------------------------------------------------------------ 
    float calculateAreaRectangle2D(Rectangle2D rectangle);

//------------------------------------------------------------------------------------------------
//-------------------------------------- Segment2D struct ----------------------------------------
//------------------------------------------------------------------------------------------------


    Vector2D calculatePointDependentTime(Vector2D orginePoint, Vector2D directionVector, float time);

    float vectorMagnitude(Vector2D A, Vector2D B);

    // Colliding
    bool collisionSegmentCircle(Circle2D circle, Vector2D A, Vector2D B);
    bool collisionLinePoint(Vector2D point, CartesianLine2D line);
    bool collisionPointSegment(Vector2D pointToCheck, Vector2D segmentA, Vector2D segmentB);
    bool collisionCircleCircle(Circle2D circle1, Circle2D circle2);
}

#endif //MY_MATH_H