#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

// The 52 cards.
class Deck {
private:
    std::vector<Card> cards;

public:
    Deck();                  // makes 52 cards

    void shuffle();
    Card dealCard();         // takes the top card
    int cardsLeft() const;
};

#endif
