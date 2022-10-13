#include "vector2D.h"

using namespace day_03;

vector2D::vector2D() : x(0.f), y(0.f)
{
}

vector2D::vector2D(float x, float y) : x(x), y(y)
{
}

vector2D::vector2D(const vector2D& copy) : x(copy.x), y(copy.y)
{
}

vector2D::vector2D(float value) : x(value), y(value)
{
}

float& vector2D::X()
{
	return x;
}

float& vector2D::Y()
{
	return y;
}

float vector2D::X() const
{
	return x;
}

float vector2D::Y() const
{
	return y;
}