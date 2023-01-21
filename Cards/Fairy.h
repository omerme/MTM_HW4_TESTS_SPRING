//
// Created by Omer Meushar on 16/01/2023.
//

#ifndef HW3_CLION_Fairy_H
#define HW3_CLION_Fairy_H

#include "Card.h"

class Fairy : public Card {

public:
    static const int GAIN_HP = 10;

    Fairy();
    void applyEncounter(const std::unique_ptr<Player>& curPlayer) const override;

    ~Fairy() override = default;
    Fairy(const Fairy&) = delete; ///???
    Fairy& operator=(const Fairy& other) = delete; ///???

private:

};


#endif //HW3_CLION_Fairy_H
