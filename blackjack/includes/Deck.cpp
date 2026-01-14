#include "Deck.h"
#include "iostream"
#include <vector>

void Deck::create_deck() {
  for (int i = 0; i < suits.size(); i++) {
    for (int k = 0; k < values.size(); k++) {
      deck.push_back(Card(suits[i], values[k]));
    }
  }
}

void Deck::show_deck() {
  for (int i = 0; i < deck.size(); i++) {
    std::cout << "Suit: " << deck[i].get_suit()
              << " Value: " << deck[i].get_value() << '\n';
  }
}
