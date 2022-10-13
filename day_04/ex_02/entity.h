#pragma once

#include <iostream>

#include "object.h"

namespace day_04::ex_02
{
    class entity : public object
    {
    private:
        int entityLife = 0;


    public:
        entity(const int entityLife = 0);

        void giveDamage(int damage);
        
        int life() const;
        void print_life() const;

        entity& operator++();

        std::string to_string() const;
    };
}