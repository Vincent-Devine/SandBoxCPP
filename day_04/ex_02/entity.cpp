#include "entity.h"

using namespace day_04::ex_02;

entity::entity(const int _entityLife) : entityLife(_entityLife)
{
}

void entity::giveDamage(int damage)
{
    entityLife -= damage;
}

int entity::life() const
{
    return entityLife;
}

void entity::print_life() const
{
    std::cout << life() << std::endl;
}

entity& entity::operator++()
{
    this->entityLife++;
    return *this;
}

std::string entity::to_string() const
{
    return "day_04::ex_01::entity";
}