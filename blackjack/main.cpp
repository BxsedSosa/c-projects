#include "./includes/Deck.h"
#include <iostream>

int main() {
  Deck deck(2);
  deck.display_deck();
  std::cout << "Cards left: " << deck.get_cards_left() << '\n';
  return 0;
}
