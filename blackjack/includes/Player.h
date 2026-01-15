
#include "Card.h"
#include <vector>

class Player {
private:
  std::vector<Card> hand;
  int balance = 100;

public:
  int get_balance();
  void set_balance(int amount);
  std::vector<Card> get_hand();
};
