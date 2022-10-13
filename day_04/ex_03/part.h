#pragma once

#include <iostream>

namespace day_04
{
    class part
    {
    private:
        std::string name = "";
        float weight = 1.f;
        int consomation = 1;
        int power = 1;
        float size = 1.f;

    public:
        part(std::string name = "", float weight = 1.f, int consomation = 1, int power = 1);
        part(std::string name = "", float weight = 1.f, float size = 1.f);

        std::string get_name() const;
        float get_weight() const;
        int get_consomation() const;
        int get_power() const;
        float get_size() const;
    };
}