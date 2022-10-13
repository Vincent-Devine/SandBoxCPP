#pragma once

#include <iostream>

namespace day_04
{
    class part
    {
    private:
        std::string name = "";
        float weight = 1.f;

    public:
        part(std::string name = "", float weight = 1.f);

        std::string get_name() const;
        float get_weight() const;
    };
}