//
// Created by Omer Meushar on 16/01/2023.
//

#include "Vampire.h"
//#include "Players/Player.h"

void Vampire::applyMonsterEffect(const std::unique_ptr<Player>& curPlayer) const
{
    curPlayer->decForce();
}

Vampire::Vampire() : Battle("Vampire", FORCE, LOOT, PLAYER_HP_DAMAGE) {}

