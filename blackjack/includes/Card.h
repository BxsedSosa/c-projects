#pragma once

#include <string>
class Card {
private:
  char suit;
  std::string value;

public:
  Card(char suit, std::string value);
  char get_suit();
  std::string get_value();
};
