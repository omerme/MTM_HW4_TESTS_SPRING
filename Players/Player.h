//
// Created by alex on 1/14/23.
//

#ifndef HW3_CLION_PLAYER_H
#define HW3_CLION_PLAYER_H

#include <string>

#include <iostream>




class Player
{
public:
    static const int MAX_HP = 100;
    static const int MAX_LEVEL = 10;
    static const int NEW_PLAYER_LEVEL = 1;
    static const int NEW_PLAYER_FORCE = 5;
    static const int NEW_PLAYER_COINS = 10;
    static const int DOUBLE = 2;


    explicit Player(const std::string& name); ///should it be string& or by value?
//            m_name(name), m_level(NEW_PLAYER_LEVEL), m_force(NEW_PLAYER_FORCE),
//            m_maxHP(MAX_HP), m_HP(MAX_HP), m_coins(NEW_PLAYER_COINS) {}


    virtual ~Player() = default;

    /*** setters and getters: ***/

    virtual int getAttackStrength() const;
//    {
//        return m_force+m_level;
//    }
    const std::string& getName() const;
//    {
//        return m_name; // This should return *char instead of std__string, in order to match with the method printPlayerInfo
//    }
    int getLevel() const ;// required
//    {
//        return m_level;
//    }
    int getForce() const;
//    {
//        return m_force;
//    }

    int getHP() const;
//    {
//        return m_HP;
//    }
    int getCoins() const;
//    {
//        return m_coins;
//    }

    /*** other required methods ***/
    /// if methods get neg/wrong value treat as got 0
    void damage(int deductedHP);
//    {
//        if(deductedHP<=0) {
//            return;
//        }
//        m_HP = (m_HP-deductedHP<0) ? 0 : m_HP-deductedHP;
//    }
    void levelUp();
//    {
//        if(m_level < MAX_LEVEL) {
//            m_level++;
//        }
//    }
    bool isKnockedOut() const;
//    {
//        return (m_HP==0);
//    }
    bool won() const;
//    {
//        return getLevel() == MAX_LEVEL;
//    }
    bool pay(int deductedCoins); ///if false - not committing payment.
//    {
//        if(deductedCoins<=0) { //piazza @205
//            return true;
//        }
//        if(m_coins-deductedCoins<0) { // doesn't have enough coins
//            return false;
//        }
//        m_coins = m_coins-deductedCoins; // has enough coins
//        return true;
//    }

    virtual void addCoins(int addedCoins);
//    {
//        m_coins += (addedCoins<=0) ? 0 : addedCoins;
//    }
    virtual void buff(int forceIncrease);
//    {
//        if(forceIncrease > 0) {
//            m_force += forceIncrease;
//        }
//    }
    virtual void heal(int addedHP); ///increase HP by addedHP with. total max value of maxHP.
//    {
//        if(addedHP<=0) {
//            return;
//        }
//        m_HP = (m_HP+addedHP>=m_maxHP) ? m_maxHP : m_HP+addedHP;
//    }
    void decForce(); ///added by omer - 16.1
//    {
//        if(m_force>0) {
//            m_force--;
//        }
//    }

    bool isPlaying() const;
//    {
//        return (!won() && !isKnockedOut());
//    }

    virtual std::string getJob() const = 0; //purely virtual

    friend std::ostream& operator<<(std::ostream & os, const Player& player);


//private:
protected:
    std::string m_name; ///english letters (Aa), no spaces.
    int m_level; /// int in range 1..10
    int m_force; /// int >= 0
    int m_maxHP; /// int > 0
    int m_HP; /// int in range 0..maxHP
    int m_coins; /// int >= 0

};

//
//std::ostream& operator<<(std::ostream& os, const Player& player)
//{
//    printPlayerDetails(os,player.getName(),player.getJob(),
//                       player.getLevel(), player.getForce(), player.getHP(), player.getCoins());
//    return os;
//}

#endif //HW3_CLION_PLAYER_H
