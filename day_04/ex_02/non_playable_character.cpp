#include "non_playable_character.h"

using namespace day_04::ex_02;

non_playable_character::non_playable_character():entity(5)
{
    std::cout << "Npc is born !" << std::endl;
}

non_playable_character::~non_playable_character()
{
    std::cout << "Npc is dead !" << std::endl;
}

std::string non_playable_character::to_string() const
{
    return "day_04::ex_01::non_playable_character";
}