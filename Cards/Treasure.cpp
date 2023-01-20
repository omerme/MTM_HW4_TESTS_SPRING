//
// Created by Omer Meushar on 16/01/2023.
//

#include "Treasure.h"

Treasure::Treasure() : Card("Treasure") {}

void Treasure::applyEncounter(const std::unique_ptr<Player>& curPlayer) const
{
    curPlayer->addCoins(TREASURE_COINS);
    printTreasureMessage();
}
