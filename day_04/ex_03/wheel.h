#pragma once

#include <iostream>

#include "part.h"

namespace day_04
{
    class wheel : public part
    {
    public:
        wheel(std::string name = "", float weight = 1.f, float size = 1.f);

        operator std::string() const;
    };
}