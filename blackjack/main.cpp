#include "./includes/Deck.h"
#include "./includes/Player.h"
#include <iostream>

int main() {
  Player player1;
  Deck deck(2);
  std::cout << "Cards left: " << deck.get_cards_left() << '\n';
  std::cout << "Player Balance: " << player1.get_balance() << '\n';
  player1.set_balance(1000);
  std::cout << "Player Balance: " << player1.get_balance() << '\n';
  return 0;
}
