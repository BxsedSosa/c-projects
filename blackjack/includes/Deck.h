#pragma once

#include "Card.h"
#include <vector>

class Deck {

private:
  std::vector<Card> deck;

public:
  Deck(int decks);
  void display_deck();
  void shuffle_deck();
  int get_cards_left();
};
