//
// Created by Omer Meushar on 16/01/2023.
//

#ifndef HW3_CLION_Pitfall_H
#define HW3_CLION_Pitfall_H

#include "Card.h"

class Pitfall : public Card{

public:
    static const int Pitfall_LOSE_HP = 10;

    Pitfall();
    void applyEncounter(const std::unique_ptr<Player>& curPlayer) const override;

    ~Pitfall() override = default;
    Pitfall(const Pitfall&) = delete; ///???
    Pitfall& operator=(const Pitfall& other) = delete; ///???

private:

};


#endif //HW3_CLION_Pitfall_H
