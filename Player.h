#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Card.h"

// You or the dealer, and the cards they hold.
class Player {
private:
    std::string name;
    bool isDealer;            // true for the dealer
    std::vector<Card> cards;  // the hand

public:
    Player(std::string name, bool isDealer);

    std::string getName() const;
    void addCard(Card card);
    int getTotal() const;     // Ace counts as 1 or 11
    bool isBust() const;      // over 21
    bool isBlackjack() const; // 21 with 2 cards
    bool wantsToHit();        // dealer: under 17. you: ask
    void showHand() const;
    void clearHand();
};

#endif
