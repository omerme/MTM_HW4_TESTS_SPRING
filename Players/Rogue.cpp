//
// Created by alex on 1/19/23.
//

#include "Rogue.h"

Rogue::Rogue(const std::string& name): Player(name) {}

void Rogue::addCoins(int addedCoins)
{
    m_coins += DOUBLE*addedCoins;
}

std::string Rogue::getJob() const
{
    return "Rogue";
}
