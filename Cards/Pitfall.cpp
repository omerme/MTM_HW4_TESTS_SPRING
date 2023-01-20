//
// Created by Omer Meushar on 16/01/2023.
//

#include "Pitfall.h"
#include "Players/Rogue.h"


Pitfall::Pitfall() : Card("Pitfall") {}

//omer 16.1: do we need to specifically address case of dead player?
void Pitfall::applyEncounter(const std::unique_ptr<Player>& curPlayer) const
{
    bool isRogue =  dynamic_cast<const Rogue*>(curPlayer.get()) != nullptr;
    if(!isRogue) {
        curPlayer->damage(Pitfall_LOSE_HP);
    }
    printPitfallMessage(isRogue);
}