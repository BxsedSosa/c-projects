#include "./includes/Dealer.h"
#include "./includes/Player.h"
#include <iostream>

int main() {
  Dealer dealer;
  Player player;
  std::cout << "Dealer Balance: " << dealer.get_balance() << '\n';
  std::cout << "Player Balance: " << player.get_balance() << '\n';
  player.set_balance(1000);
  std::cout << "Player Balance: " << player.get_balance() << '\n';
  dealer.start_game(6);
  std::cout << "There is " << dealer.cards_left_in_deck()
            << " cards left in the shoe\n";
  return 0;
}
