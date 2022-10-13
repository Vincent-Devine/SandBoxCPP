#include "vector2D.h"

using namespace day_03;

const vector2D vector2D::zero = {0.f, 0.f};
const vector2D vector2D::up = {0.f, 1.f};
const vector2D vector2D::down = {0.f, -1.f};
const vector2D vector2D::left = {-1.f, 0.f};
const vector2D vector2D::right = {1.f, 0.f};

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

float& vector2D::operator[](int i)
{
	if(i == 0)
		return x;
	else
		return y;
}

float& vector2D::operator[](std::string value)
{
	if(value == "x")
		return x;
	else
		return y;
}