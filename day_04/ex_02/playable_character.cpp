#include "playable_character.h"

using namespace day_04::ex_02;

playable_character::playable_character():entity(20)
{
}

playable_character& playable_character::operator*(non_playable_character& non_playable_character)
{
    non_playable_character.giveDamage(4);
    return *this;
}


std::string playable_character::to_string() const
{
    return "day_04::ex_01::playable_character";
}