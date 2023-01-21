//
// Created by Omer Meushar on 16/01/2023.
//

#ifndef HW3_CLION_Vampire_H
#define HW3_CLION_Vampire_H

#include "Battle.h"

class Vampire : public Battle {

public:
    static const int FORCE = 10;
    static const int LOOT = 2;
    static const int PLAYER_HP_DAMAGE = 10;

    Vampire();

    void applyMonsterEffect(const std::unique_ptr<Player>& curPlayer) const override;

    ~Vampire() override = default;
    Vampire(const Vampire&) = delete; ///???
    Vampire& operator=(const Vampire& other) = delete; ///???

};

#endif //HW3_CLION_Vampire_H
