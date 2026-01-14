#pragma ONCE
#include "Card.h"
#include <string>
#include <vector>

class Deck {
  std::vector<Card> deck;
  std::vector<char> suits = {'C', 'S', 'C', 'D'};
  std::vector<std::string> values = {"A", "2", "3",  "4", "5", "6", "7",
                                     "8", "9", "10", "J", "Q", "K"};

public:
  void create_deck();
  void show_deck();
};

void testing();
