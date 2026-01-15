#include "Deck.h"
#include "Player.h"
#include <vector>

class Dealer : public Player {
private:
  Deck active_deck;
  int balance = 999999999;

public:
  Dealer(int decks);
};
