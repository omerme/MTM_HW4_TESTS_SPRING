//
// Created by alex on 1/15/23.
//

#ifndef HW3_CLION_Fighter_H
#define HW3_CLION_Fighter_H

#include "Player.h"

class Fighter : public Player
{
public:
    explicit Fighter(const std::string& name); //: Player(name){}

    int getAttackStrength() const override;
//    {
//        return DOUBLE*m_force+m_level;
//    }

    std::string getJob() const override;
    ~Fighter() override = default;

//    {
//        return "Fighter";
//    }
};

#endif //HW3_CLION_Fighter_H
