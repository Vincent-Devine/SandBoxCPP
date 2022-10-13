#pragma once

#include <iostream>

#include "engine.h"
#include "wheel.h"

namespace day_04
{
    class car
    {
    private:
        engine* engineUsed;
        wheel* wheels[4];

    public:
        car();
        ~car();

        float get_total_weight() const;

        void set_engine(engine* newEngine);
        void set_wheels(wheel* newWheels1, wheel* newWheels2, wheel* newWheels3, wheel* newWheels4);

        void print_parts() const;
    };
}