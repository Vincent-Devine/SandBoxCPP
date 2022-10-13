#pragma once

#include <iostream>

#include "entity.h"

namespace day_04::ex_02
{
    class non_playable_character : public entity
    {

    public:
        non_playable_character();
        ~non_playable_character();

        std::string to_string() const;
    };
}