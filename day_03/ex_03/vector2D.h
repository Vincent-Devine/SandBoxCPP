#pragma once

#include <iostream>
#include <string>

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

            friend std::ostream& operator<< (std::ostream& out, const vector2D& vector2D);
            friend std::istream& operator>> (std::istream& in, vector2D& vector2D);

            float& operator[](int i);
            float& operator[](std::string value);
    };

    std::ostream& operator<< (std::ostream& out, const vector2D& vector2D);
    std::istream& operator>> (std::istream& in, vector2D& vector2D);
}