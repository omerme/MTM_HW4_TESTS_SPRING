//
// Created by Omer Meushar on 16/01/2023.
//

#ifndef HW3_CLION_DRAGON_H
#define HW3_CLION_DRAGON_H

#include "Battle.h"

class Dragon : public Battle {

public:
    static const int FORCE = 25;
    static const int LOOT = 1000;
    //static const int PLAYER_HP_DAMAGE ;

    Dragon();

    void applyMonsterEffect(const std::unique_ptr<Player>& curPlayer) const override;

    ~Dragon() override = default;
    Dragon(const Dragon&) = delete; ///???
    Dragon& operator=(const Dragon& other) = delete; ///???

};


#endif //HW3_CLION_DRAGON_H
