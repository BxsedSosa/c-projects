#pragma once

#include "Card.h"
#include <vector>

class Deck {

private:
  std::vector<Card> deck;

public:
  Deck();
  void display_deck();
  void shuffle_deck();
};
