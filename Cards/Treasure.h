//
// Created by Omer Meushar on 16/01/2023.
//

#ifndef HW3_CLION_TREASURE_H
#define HW3_CLION_TREASURE_H

#include "Card.h"

class Treasure : public Card
{
public:
    static const int TREASURE_COINS = 10;
    Treasure();
    void applyEncounter(const std::unique_ptr<Player>& curPlayer) const override;

    ~Treasure() override = default;
    Treasure(const Treasure&) = delete; ///???
    Treasure& operator=(const Treasure& other) = delete; ///???

private:

};

#endif //HW3_CLION_TREASURE_H
