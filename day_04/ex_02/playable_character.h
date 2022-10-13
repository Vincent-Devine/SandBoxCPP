#pragma once

#include <iostream>

#include "entity.h"
#include "non_playable_character.h"

namespace day_04::ex_02
{
    class playable_character : public entity
    {

    public:
        playable_character();

        playable_character& operator*(non_playable_character& non_playable_character);
        std::string to_string() const;
    };
}