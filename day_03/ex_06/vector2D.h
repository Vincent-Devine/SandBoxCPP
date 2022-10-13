#pragma once

#include <iostream>
#include <string>
#include <cmath>

namespace day_03
{
    class vector2D
    {
        private:
            float x = 0.f;
            float y = 0.f;
            
        public:
            vector2D();
            vector2D(float x, float y);
            vector2D(const vector2D& copy);
            vector2D(float value);

            float& X();
            float& Y();
            float X() const;
            float Y() const;

            const static vector2D zero;
            const static vector2D up;
            const static vector2D down;
            const static vector2D left;
            const static vector2D right;

            float dot_product(const vector2D vector2D) const;
            float length() const;
            float cross_product(const vector2D vector2D) const;

            vector2D normalize() const;
            vector2D& normalize();

            vector2D add(const vector2D vector2D) const;
            vector2D& add(const vector2D vector2D);

            vector2D scale(const float scale) const;
            vector2D& scale(const float scale);

            float& operator[](int i);
            float& operator[](std::string value);

            friend std::ostream& operator<< (std::ostream& out, const vector2D& vector2D);
            friend std::istream& operator>> (std::istream& in, vector2D& vector2D);

            friend std::string operator+(const std::string string, const vector2D vector2D);
            friend std::string& operator+=(std::string& string, const vector2D vector2D);

            friend vector2D operator+(const vector2D left, const vector2D right);
            friend vector2D& operator+=(vector2D& left, const vector2D right);
            friend vector2D operator-(const vector2D left, const vector2D right);
            friend vector2D operator-(const vector2D vector2D);
            friend vector2D& operator-=(vector2D& left, const vector2D right);

            friend vector2D operator*(const vector2D vector2D, const float multiplier);
            friend vector2D operator*(const float multiplier, const vector2D vector2D);
            friend vector2D operator/(const vector2D vector2D, const float divider);
            friend vector2D operator/(const float divider, const vector2D vector2D);
            friend vector2D& operator*=(vector2D& vector2D, const float multipler);
            friend vector2D& operator/=(vector2D& vector2D, const float divider);

            vector2D& operator++(int);
            vector2D& operator--(int);

            friend float operator,(const vector2D left, const vector2D right);

            friend bool operator==(const vector2D left, const vector2D right);
            friend bool operator!=(const vector2D left, const vector2D right);

            friend bool operator<(const vector2D left, const vector2D right);
            friend bool operator<=(const vector2D left, const vector2D right);
            friend bool operator>(const vector2D left, const vector2D right);
            friend bool operator>=(const vector2D left, const vector2D right);
    };

    std::ostream& operator<< (std::ostream& out, const vector2D& vector2D);
    std::istream& operator>> (std::istream& in, vector2D& vector2D);

    std::string operator+(const std::string string, const vector2D vector2D);
    std::string& operator+=(std::string& string, const vector2D vector2D);

    vector2D operator+(const vector2D left, const vector2D right);
    vector2D& operator+=(vector2D& left, const vector2D right);
    vector2D operator-(const vector2D left, const vector2D right);
    vector2D operator-(const vector2D vector2D);
    vector2D& operator-=(vector2D& left, const vector2D right);

    vector2D operator*(const vector2D vector2D, const float multiplier);
    vector2D operator*(const float multiplier, const vector2D vector2D);
    vector2D operator/(const vector2D vector2D, const float divider);
    vector2D operator/(const float divider, const vector2D vector2D);
    vector2D& operator*=(vector2D& vector2D, const float multipler);
    vector2D& operator/=(vector2D& vector2D, const float divider);

    float operator,(const vector2D left, const vector2D right);

    bool operator==(const vector2D left, const vector2D right);
    bool operator!=(const vector2D left, const vector2D right);

    bool operator<(const vector2D left, const vector2D right);
    bool operator<=(const vector2D left, const vector2D right);
    bool operator>(const vector2D left, const vector2D right);
    bool operator>=(const vector2D left, const vector2D right);
}