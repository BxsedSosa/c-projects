#include "Card.h"
#include <string>

Card::Card(std::string s, std::string v) {
  suit = s;
  value = v;
}

std::string Card::get_suit() { return suit; }
std::string Card::get_value() { return value; }
