//
// Created by Omer Meushar on 16/01/2023.
//

#ifndef HW3_CLION_MERCHANT_H
#define HW3_CLION_MERCHANT_H

#include "Card.h"


class Merchant : public Card {

public:
    static const int ACTION_DO_NOTHING = 0;
    static const int ACTION_BUY_HP_POTION = 1;
    static const int ACTION_BUY_FORCE_BOOST = 2;

    static const int COST_HP = 5;
    static const int COST_FORCE_BOOST = 10;

    static const int ADDED_HP = 1;
    static const int ADDED_FORCE = 1;


    static const int USER_INPUT_SIZE = 1;

    Merchant();
    void applyEncounter(const std::unique_ptr<Player>& curPlayer) const override;

    ~Merchant() override = default;
    Merchant(const Merchant&) = delete; ///???
    Merchant& operator=(const Merchant& other) = delete; ///???
private:

};

//omer 16/1: checkSufficientMoney is static
//bool checkSufficientMoney(const Player&, int cost) const;





#endif //HW3_CLION_MERCHANT_H
