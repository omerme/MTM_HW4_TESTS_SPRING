//
// Created by Omer Meushar on 16/01/2023.
//

#ifndef HW3_CLION_BARFIGHT_H
#define HW3_CLION_BARFIGHT_H

#include "Card.h"

class Barfight : public Card{

public:
    static const int BARFIGHT_LOSE_HP = 10;

    Barfight();
    void applyEncounter(const std::unique_ptr<Player>& curPlayer) const override;

    //std::ostream& virtualPrintCard(std::ostream& os) const override;

    ~Barfight() override = default;
    Barfight(const Barfight&) = delete; ///???
    Barfight& operator=(const Barfight& other) = delete; ///???

private:

};


#endif //HW3_CLION_BARFIGHT_H
