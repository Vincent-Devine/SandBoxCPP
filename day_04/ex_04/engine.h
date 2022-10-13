#pragma once

#include <iostream>

#include "part.h"

namespace day_04
{
    class engine : public part
    {
    private:
        int consomation = 1;
        int power = 1;

    public:
        engine();
        engine(std::string name, float weight = 1.f, int consomation = 1, int power = 1);

        ~engine();

        operator std::string() const;
    };
}