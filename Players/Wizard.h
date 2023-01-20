//
// Created by alex on 1/15/23.
//
#ifndef HW3_CLION_Wizard_H
#define HW3_CLION_Wizard_H

#include "Player.h"

class Wizard : public Player
{
public:
    explicit Wizard(const std::string& name); //: Player(name){}

    void heal(int addedHP) override;
//    {
////        if(addedHP<=0) {
////            return;
////        }
//        m_HP = (m_HP+ DOUBLE*addedHP>=m_maxHP) ? m_maxHP : m_HP+ DOUBLE*addedHP;
//    }

    std::string getJob() const override;
    ~Wizard() override = default;

//    {
//        return "Wizard";
//    }
};


#endif //HW3_CLION_Wizard_H
