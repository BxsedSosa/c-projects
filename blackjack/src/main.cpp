#include "../includes/Dealer.h"
#include "../includes/Player.h"
#include <iostream>

int main() {
  Dealer dealer;
  Player player;
  player.set_balance(1000);
  std::cout << "Player Balance: " << player.get_balance() << '\n';
  dealer.start_game(6);
  std::cout << "There is " << dealer.cards_left_in_deck()
            << " cards left in the shoe\n";

  player.set_new_card(dealer.draw_card());
  player.set_new_card(dealer.draw_card());
  dealer.set_new_card(dealer.draw_card());
  dealer.set_new_card(dealer.draw_card());
  dealer.display_hand();
  player.display_hand();
  std::cout << "There is " << dealer.cards_left_in_deck()
            << " cards left in the shoe\n";

  return 0;
}
