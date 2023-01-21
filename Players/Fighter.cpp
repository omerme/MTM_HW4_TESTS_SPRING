//
// Created by alex on 1/19/23.
//

#include "Fighter.h"

Fighter::Fighter(const std::string& name): Player(name){}

int Fighter::getAttackStrength() const
{
    return DOUBLE*m_force+m_level;
}

std::string Fighter::getJob() const
{
    return "Fighter";
}