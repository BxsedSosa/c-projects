#include "../includes/Player.h"
#include "../includes/Card.h"
#include <vector>

int Player::get_balance() { return balance; }
void Player::set_balance(int amount) { balance += amount; }
std::vector<Card> Player::get_hand() { return hand; }
