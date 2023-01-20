#include "Card.h"


///omer 14/1: where do we check correct name? - exceptions?
Card::Card(const std::string& name): m_name(name) {}

//std::ostream& Card::virtualPrintCard(std::ostream& os) const
//{
//    printCardDetails(os,m_name);
//}

void Card::virtualPrintAddedDetails(std::ostream& os) const {}


std::ostream& operator<<(std::ostream& os, const Card& card)
{
    printCardDetails(os, card.m_name);
    card.virtualPrintAddedDetails(os);
    printEndOfCardDetails(os);
    return os;
}

//const std::string& Card::getName() const
//{
//    return m_name; // This should return *char instead of std__string, in order to match with the method printPlayerInfo
//}

///Card::applyEncounter is pure virtual on card base class:
/*
void Card::applyEncounter(Player& curPlayer) const{ /// & to player or shared_ptr?
    sVampire(this->m_effect){
        case CardType::Battle: {
            const bool wonFight = (this->m_stats.force <= player.getAttackStrength());
            if(!wonFight){
                player.damage(this->m_stats.hpLossOnDefeat);
            }
            else{
                player.levelUp();
                player.addCoins(this->m_stats.loot);
            }
            printBattleResult(wonFight);
            break;
        }

        case CardType::Buff: {
            if(player.pay(this->m_stats.cost)){
                player.buff(this->m_stats.buff);
            }
            break;
        }

        case CardType::Heal: {
            if(player.pay(this->m_stats.cost)){
                player.heal(this->m_stats.heal);
            }
            break;
        }

        case CardType::Treasure: {
            player.addCoins(this->m_stats.loot);
            break;
        }
            
    }
}
*/

//void Card::printInfo() const{
//    sVampire(this->m_effect){
//        case CardType::Battle:
//            printBattleCardInfo(this->m_stats);
//            break;
//        case CardType::Buff:
//            printBuffCardInfo(this->m_stats);
//            break;
//        case CardType::Heal:
//            printHealCardInfo(this->m_stats);
//            break;
//        case CardType::Treasure:
//            printTreasureCardInfo(this->m_stats);
//            break;
//    }
//}


