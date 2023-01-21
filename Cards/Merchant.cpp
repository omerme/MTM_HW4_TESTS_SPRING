//
// Created by Omer Meushar on 16/01/2023.
//

#include "Card.h"
#include "Merchant.h"
#include <cassert>

/*** static functions: ***/
static bool checkSufficientMoney(const std::unique_ptr<Player>& curPlayer, int cost);
static int validateMerchantUserInput();


/*** Merchant functions: ***/
Merchant::Merchant() : Card("Merchant"){}

//omer 16/1: how do we make sure if he has enough coins? specific func? exception?
void Merchant::applyEncounter(const std::unique_ptr<Player>& curPlayer) const
{ ///updated test10
    printMerchantInitialMessageForInteractiveEncounter(std::cout,curPlayer->getName(),curPlayer->getCoins());
    int userNum = validateMerchantUserInput();
    if(userNum == ACTION_DO_NOTHING) {
        printMerchantSummary(std::cout,curPlayer->getName(),ACTION_DO_NOTHING,0);
        return;
    }
    //else - buying HP or Force:
    int cost = (userNum==ACTION_BUY_HP_POTION ? COST_HP : COST_FORCE_BOOST);
    if(checkSufficientMoney(curPlayer,cost)) { // player has enough coins
        curPlayer->pay(cost);
        if(userNum==ACTION_BUY_HP_POTION) {
            curPlayer->heal(ADDED_HP);
        }
        else {
            curPlayer->buff(ADDED_FORCE);
        }
    }
    else { //not sufficient coins
        cost = 0;
        printMerchantInsufficientCoins(std::cout);
    }
    printMerchantSummary(std::cout,curPlayer->getName(),userNum, cost);
}

static bool checkSufficientMoney(const std::unique_ptr<Player>& player, int cost)
{
    int playerCoins = player->getCoins();
    assert(playerCoins>=0 && cost>0);
    return playerCoins>=cost;
}

static int validateMerchantUserInput()
{
    std::string userInput;
    int userNum;
    while (true)
    {
        std::getline(std::cin,userInput);
        try { ///updated test10
            userNum = std::stoi(userInput);
        }
        catch(...) {
            printInvalidInput();
            continue;
        }
        if(userNum < Merchant::ACTION_DO_NOTHING || userNum > Merchant::ACTION_BUY_FORCE_BOOST)
        {
            printInvalidInput();
            continue;
        }
        return userNum;
    }
}

//validateMerchantUserInput alternative with try and catch:
/*
static int validateMerchantUserInput()
{
    bool validInputFlag = false;
    char userInput[Merchant::USER_INPUT_SIZE];
    int userNum = -1;
    while (validInputFlag == false)
    {
        try{
            std::cin.getline(userInput,sizeof(userInput));
            userNum = std::stoi(userInput);
            if(userNum<Merchant::ACTION_DO_NOTHING || userNum>Merchant::ACTION_BUY_FORCE_BOOST)
            {
                throw InvalidMerchantInput();
            }
        }
        catch(...)
        {
            printInvalidInput();
            continue;
        }
        validInputFlag= true;
    }
}
 * */
