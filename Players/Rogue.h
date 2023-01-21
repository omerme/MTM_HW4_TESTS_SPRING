//
// Created by alex on 1/14/23.
//

#ifndef HW3_CLION_Rogue_H
#define HW3_CLION_Rogue_H

#include "Player.h"

class Rogue : public Player
{
public:
    explicit Rogue(const std::string& name); //: Player(name) {}

    void addCoins(int addedCoins) override;
//    {
//        m_coins += DOUBLE*addedCoins;
////        m_coins += (addedCoins<=0) ? 0 : 2*addedCoins;
//    }

    std::string getJob() const override;
    ~Rogue() override = default;

//    {
//        return "Rogue";
//    }

};

#endif //HW3_CLION_Rogue_H
