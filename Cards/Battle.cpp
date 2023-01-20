//
// Created by Omer Meushar on 16/01/2023.
//

#include "Battle.h"
#include "Card.h"
#include "Dragon.h"

Battle::Battle(const std::string& name, int force, int loot, int playerHPDamage) :
               Card(name), m_force(force), m_loot(loot), m_playerHPDamage(playerHPDamage) {}

void Battle::applyEncounter(const std::unique_ptr<Player>& curPlayer) const
{
    if (curPlayer->getAttackStrength()>=m_force) //if player won:
    {
        curPlayer->levelUp();
        curPlayer->addCoins(m_loot);
        printWinBattle(curPlayer->getName(), m_name);
    }
    else //if player lost:
    {
        curPlayer->damage(m_playerHPDamage);
        applyMonsterEffect(curPlayer);
        printLossBattle(curPlayer->getName(), m_name);
    }
}

void Battle::virtualPrintAddedDetails(std::ostream& os) const
{
    printMonsterDetails(os, m_force, m_playerHPDamage, m_loot, dynamic_cast<const Dragon*>(this));
}



