//
// Created by Omer Meushar on 16/01/2023.
//

#include "Barfight.h"
#include "Players/Fighter.h"


Barfight::Barfight() : Card("Barfight") {}

//omer 16.1: do we need to specifically address case of dead player?
void Barfight::applyEncounter(const std::unique_ptr<Player>& curPlayer) const
{
    bool isFighter =  dynamic_cast<const Fighter*>(curPlayer.get()) != nullptr;
    if(!isFighter) {
        curPlayer->damage(BARFIGHT_LOSE_HP);
    }
    printBarfightMessage(isFighter);
}

//std::ostream& Card::virtualPrintCard(std::ostream& os) const
//{
//    printCardDetails(os,m_name);
//}