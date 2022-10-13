#pragma once

#define MY_PI 3.14159265358979323846
#define MY_PI_2 1.57079632679489661923
#define MY_PI_4 0.78539816339744830962

struct Vector2D
{
    float x = 0.f;
    float y = 0.f;
};

struct CartesianLine2D	// Cartesian equation (ax + by + c = 0)
{
    float a = 0.f;
    float b = 0.f;
    float c = 0.f;
};

struct SlopeInterceptLine2D // Slope Intercept equation (y = ax + b)
{
    float a = 0.f;
    float b = 0.f;
};

struct VectorLine2D // Vector equation (OP = OA + t*u)
{
    Vector2D OA = {0.f, 0.f};
    Vector2D u = {0.f, 0.f};
    float t = 0.f;
};

struct Circle2D
{
    Vector2D centre;
    float radius;
};

struct Triangle2D
{
    Vector2D vertices[3];
};

struct Rectangle2D
{
    Vector2D vertices[4];
};

struct Segment2D
{
    Vector2D vertices[2];
};