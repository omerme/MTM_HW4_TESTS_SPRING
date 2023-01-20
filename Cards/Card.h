//
// Created by Omer Meushar on 20/01/2023.
//
#ifndef EX4_Card_H
#define EX4_Card_H

#include <string>
#include "../Players/Player.h"
#include "../utilities.h"
#include "Exception.h"

///*
// *  CardType:
// *  Each card has a type:
// *  Goblin, Vampire, Dragon - Battle against a monster.
// *  Merchant - Increase current player's force/HP for money.
// *  Treasure - current player gets 10 coins.
// *  Pitfall - current player loses 10 HP unless he's a Rogue.
// *  Barfight - current player loses 10 HP unless he's a Fighter.
// *  Fairy - if current player is a Wizard, Increase HP by 10 points - which means 20 for Wizard (no more than maxHP points).
//*/
//enum class AllowedCards {Goblin, Vampire, Dragon, Merchant, Treasure, Pitfall, Barfight, Fairy}; // The type of the Card

class Card {
public:


//    virtual const std::string& getName() const = 0;

    /*
     * Handling the player's applyEncounter with the card:
     *
     * @param curPlayer - The current player.
     * @return
     *      void
    */
    virtual void applyEncounter(const std::unique_ptr<Player>& curPlayer) const = 0; ///omer 16.1: const method?

    virtual void virtualPrintAddedDetails(std::ostream& os) const;

    friend std::ostream& operator<<(std::ostream& os, const Card& card);


//    /*
//     * Prints the card info:
//     *
//     * @return
//     *      void
//    */
//    void printInfo() const;


//    /*
//     * C'tor to the "default card" - Treasure card that gives 0 coins
//    */
//    Card(): m_effect(CardType::Treasure), m_stats() {}


    /*
     * default / deleted
    */
    ///omer 14/1: need for exception handling?
    virtual ~Card() = default;
    Card(const Card&) = delete; ///???
    Card& operator=(const Card& other) = delete; ///???

protected:
    /*
 * C'tor of Card class
 *
 * @param name - The name of the card.
 * @return
 *      A new instance of Card.
*/
    explicit Card(const std::string& name);
    std::string m_name;

private:

};




#endif //EX4_Card_H
