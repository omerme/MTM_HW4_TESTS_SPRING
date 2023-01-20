//
// Created by Omer Meushar on 16/01/2023.
//

#include "Fairy.h"
#include "Players/Wizard.h"


Fairy::Fairy() : Card("Fairy") {}

void Fairy::applyEncounter(const std::unique_ptr<Player>& curPlayer) const
{
    bool isWizard =  dynamic_cast<const Wizard*>(curPlayer.get()) != nullptr;
    if(isWizard) {
        curPlayer->heal(GAIN_HP);
    }
    printFairyMessage(isWizard);
}
