//
// Created by Omer Meushar on 16/01/2023.
//

#ifndef HW3_CLION_Goblin_H
#define HW3_CLION_Goblin_H

#include "Battle.h"

class Goblin : public Battle {

public:
    static const int FORCE = 6;
    static const int LOOT = 2;
    static const int PLAYER_HP_DAMAGE = 10;

    Goblin();

    void applyMonsterEffect(const std::unique_ptr<Player>& curPlayer) const override;

    ~Goblin() override = default;
    Goblin(const Goblin&) = delete; ///???
    Goblin& operator=(const Goblin& other) = delete; ///???

};


#endif //HW3_CLION_Goblin_H
