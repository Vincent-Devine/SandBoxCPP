#pragma once

#include <iostream>

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

            friend std::ostream& operator<< (std::ostream& out, const vector2D& vector2D)
            {
                out << vector2D.X() << "," << vector2D.Y();
                return out;
            }
    };
}