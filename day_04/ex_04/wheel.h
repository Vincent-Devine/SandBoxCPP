#pragma once

#include <iostream>

#include "part.h"

namespace day_04
{
    class wheel : public part
    {
    private:
        int size = 0;

    public:
        wheel();
        wheel(std::string name, float weight = 1.f, float size = 1.f);

        ~wheel();

        operator std::string() const;
    };
}