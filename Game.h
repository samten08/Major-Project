#ifndef GAME_H
#define GAME_H

#include <string>
#include "Deck.h"
#include "Player.h"

// Runs one round of Blackjack.
class Game {
private:
    Deck deck;
    Player player;
    Player dealer;

public:
    Game(std::string playerName);

    void play();            // runs the whole round
    void dealFirstCards();  // 2 cards each
    void playerTurn();
    void dealerTurn();
    void showWinner();
};

#endif
