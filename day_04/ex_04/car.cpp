#include "car.h"

using namespace day_04;

car::car()
{
    engineUsed = new engine;
    wheels[0] = new wheel;
    wheels[1] = new wheel;
    wheels[2] = new wheel;
    wheels[3] = new wheel;
}

car::~car()
{
    delete wheels[0];
    delete wheels[1];
    delete wheels[2];
    delete wheels[3];    
    delete engineUsed;
}

float car::get_total_weight() const
{
    return engineUsed->get_weight() + wheels[0]->get_weight()  + wheels[1]->get_weight()  + wheels[2]->get_weight()  + wheels[3]->get_weight();
}

void car::set_engine(engine* newEngine)
{
    delete engineUsed;
    this->engineUsed = newEngine;
}

void car::set_wheels(wheel* newWheel0, wheel* newWheel1, wheel* newWheel2, wheel* newWheel3)
{
    this->wheels[0] = newWheel0;
    this->wheels[1] = newWheel1;
    this->wheels[2] = newWheel2;
    this->wheels[3] = newWheel3;
}

void car::print_parts() const
{
    std::cout 
    << "Engine : " << engineUsed->get_name()
    << ",Wheel1 : " << wheels[0]->get_name()
    << ",Wheel2 : " << wheels[1]->get_name()
    << ",Wheel3 : " << wheels[2]->get_name()
    << ",Wheel4 : " << wheels[3]->get_name() 
    << std::endl;
}