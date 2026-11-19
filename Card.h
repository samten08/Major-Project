#ifndef CARD_H
#define CARD_H

#include <string>

// One playing card.
class Card {
private:
    std::string rank;   // 2 to 10, J, Q, K, A
    std::string suit;   // Hearts, Diamonds, Clubs, Spades

public:
    Card(std::string rank, std::string suit);

    std::string getRank() const;
    std::string getSuit() const;
    int getValue() const;          // points the card is worth
};

#endif
