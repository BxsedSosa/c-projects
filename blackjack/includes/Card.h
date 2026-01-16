#pragma once

#include <string>

class Card {
private:
  std::string suit;
  std::string value;

public:
  Card(std::string s, std::string v);
  std::string get_suit();
  std::string get_value();
};
