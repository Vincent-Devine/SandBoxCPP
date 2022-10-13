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

float vector2D::dot_product(const vector2D vector2D) const
{
	return x * vector2D.x + y * vector2D.y;
}

float vector2D::length() const
{
	return sqrtf(powf(x, 2) + powf(y, 2));
}

float vector2D::cross_product(const vector2D vector2D) const
{
	return x * vector2D.y - y * vector2D.x;
}

vector2D vector2D::normalize() const
{
	return scale(1/this->length());
}

vector2D& vector2D::normalize()
{
	this->scale(1/this->length());
	return *this;
}

vector2D vector2D::add(const vector2D vector2D) const
{
	return {x + vector2D.x, y + vector2D.y};
}

vector2D& vector2D::add(const vector2D vector2D)
{
	x += vector2D.x;
	y += vector2D.y;
	return *this; 
}

vector2D vector2D::scale(const float scale) const
{
	return {x * scale, y * scale};
}

vector2D& vector2D::scale(const float scale)
{
	x *= scale;
	y *= scale;
	return *this;
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

//------------------------------------------------------------------------------------------------
//--------------------------------------- Operator friend ----------------------------------------
//------------------------------------------------------------------------------------------------

std::ostream& day_03::operator<< (std::ostream& out, const vector2D& vector2D)
{
	out << vector2D.X() << "," << vector2D.Y();
	return out;
}

std::istream& day_03::operator>> (std::istream& in, vector2D& vector2D)
{
	std::string inString;
	std::string xString;
	std::string yString;
	int coma = 0;

	in >> inString;
	
	for(int i = 0; i < inString.size(); i++)
	{
		if(inString[i] == ',')
			coma = i;
	}

	if(coma != 0)
	{
		for(int i = 0; i < coma+1; i++)
		{
			xString.push_back(inString[i]);
		}

		for(int i = coma+1; i < inString.size(); i++)
		{
			yString.push_back(inString[i]);
		}
	}
	else
	{
		xString = '0';
		yString = '0';
	}

	vector2D.x = std::stof(xString);
	vector2D.y = std::stof(yString);

	return in;
}

std::string day_03::operator+(const std::string string, const vector2D vector2D)
{
	return string + "x:" + std::to_string(vector2D.x) + ",y:" + std::to_string(vector2D.y);
}

std::string& day_03::operator+=(std::string& string, const vector2D vector2D)
{
	string = string + vector2D;
	return string;
}

vector2D day_03::operator+(const vector2D left, const vector2D right)
{
	return {left.x + right.x, left.y + right.y};
}

vector2D& day_03::operator+=(vector2D& left, const vector2D right)
{
	left = left + right;
	return left;
}

vector2D day_03::operator-(const vector2D left, const vector2D right)
{
	return {left.x - right.x, left.y - right.y};
}

vector2D day_03::operator-(const vector2D vector2D)
{
	return {-vector2D.x, -vector2D.y};
}

vector2D& day_03::operator-=(vector2D& left, const vector2D right)
{
	left = left - right;
	return left;
}

vector2D day_03::operator*(const vector2D vector2D, const float multiplier)
{
	return {vector2D.x * multiplier, vector2D.y * multiplier};
}

vector2D day_03::operator*(const float multiplier, const vector2D vector2D)
{
	return {vector2D.x * multiplier, vector2D.y * multiplier};
}

vector2D day_03::operator/(const vector2D vector2D, const float divider)
{
	return {vector2D.x / divider, vector2D.y / divider};
}

vector2D day_03::operator/(const float divider, const vector2D vector2D)
{
	return {divider / vector2D.x, divider / vector2D.y};
}

vector2D& day_03::operator*=(vector2D& vector2D, const float multipler)
{
	vector2D = vector2D * multipler;
	return vector2D;
}

vector2D& day_03::operator/=(vector2D& vector2D, const float divider)
{
	vector2D = vector2D / divider;
	return vector2D;
}

vector2D& vector2D::operator++(int)
{
	float length = this->length();
	x *= (length + 1) / length;
	y *= (length + 1) / length;
	return *this;
}

vector2D& vector2D::operator--(int)
{
	float length = this->length();
	x *= (length - 1) / length;
	y *= (length - 1) / length;
	return *this;
}

float day_03::operator,(const vector2D left, const vector2D right)
{
	return left.dot_product(right);
}

bool day_03::operator==(const vector2D left, const vector2D right)
{
	if(left.x == right.x && left.y == right.y)
		return true;
	else
		return false;
}

bool day_03::operator!=(const vector2D left, const vector2D right)
{
	if(left.x != right.x && left.y != right.y)
		return true;
	else
		return false;
}

bool day_03::operator<(const vector2D left, const vector2D right)
{
	if(left.x < right.x && left.y < right.y)
		return true;
	else
		return false;
}

bool day_03::operator<=(const vector2D left, const vector2D right)
{
	if(left.x <= right.x && left.y <= right.y)
		return true;
	else
		return false;
}

bool day_03::operator>(const vector2D left, const vector2D right)
{
	if(left.x > right.x && left.y > right.y)
		return true;
	else
		return false;
}

bool day_03::operator>=(const vector2D left, const vector2D right)
{
	if(left.x >= right.x && left.y >= right.y)
		return true;
	else
		return false;
}