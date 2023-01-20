//
// Created by alex on 1/19/23.
//

#include "Player.h"
#include "../utilities.h"
#include "Exception.h"

Player::Player(const std::string& name) : m_name(name), m_level(NEW_PLAYER_LEVEL), m_force(NEW_PLAYER_FORCE),
                                          m_maxHP(MAX_HP), m_HP(MAX_HP), m_coins(NEW_PLAYER_COINS) {}

/*** setters and getters: ***/

int Player::getAttackStrength() const
{
    return m_force+m_level;
}
const std::string& Player::getName() const
{
    return m_name; // This should return *char instead of std__string, in order to match with the method printPlayerInfo
}
int Player::getLevel() const // required
{
    return m_level;
}
int Player::getForce() const
{
    return m_force;
}

int Player::getHP() const
{
    return m_HP;
}
int Player::getCoins() const
{
    return m_coins;
}

/*** other required methods ***/
/// if methods get neg/wrong value treat as got 0
void Player::damage(int deductedHP)
{
    if(deductedHP<=0) {
        return;
    }
    m_HP = (m_HP-deductedHP<0) ? 0 : m_HP-deductedHP;
}
void Player::levelUp()
{
    if(m_level < MAX_LEVEL) {
        m_level++;
    }
}
bool Player::isKnockedOut() const
{
    return (m_HP==0);
}
bool Player::won() const
{
    return getLevel() == MAX_LEVEL;
}
bool Player::pay(int deductedCoins) ///if false - not committing payment.
{
    if(deductedCoins<=0) { //piazza @205
        return true;
    }
    if(m_coins-deductedCoins<0) { // doesn't have enough coins
        return false;
    }
    m_coins = m_coins-deductedCoins; // has enough coins
    return true;
}

void Player::addCoins(int addedCoins)
{
    m_coins += (addedCoins<=0) ? 0 : addedCoins;
}
void Player::buff(int forceIncrease)
{
    if(forceIncrease > 0) {
        m_force += forceIncrease;
    }
}
void Player::heal(int addedHP) ///increase HP by addedHP with. total max value of maxHP.
{
    if(addedHP<=0) {
        return;
    }
    m_HP = (m_HP+addedHP>=m_maxHP) ? m_maxHP : m_HP+addedHP;
}
void Player::decForce() ///added by omer - 16.1
{
    if(m_force>0) {
        m_force--;
    }
}

bool Player::isPlaying() const
{
    return (!won() && !isKnockedOut());
}

std::ostream& operator<<(std::ostream& os, const Player& player)
{
    printPlayerDetails(os,player.getName(),player.getJob(),
                       player.getLevel(), player.getForce(), player.getHP(), player.getCoins());
    return os;
}