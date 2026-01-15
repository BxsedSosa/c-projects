#include "Deck.h"
#include "Card.h"
#include <algorithm>
#include <iostream>
#include <random>
#include <string>
#include <vector>

std::vector<char> suits = {'C', 'S', 'C', 'D'};
std::vector<std::string> values = {"A", "2", "3",  "4", "5", "6", "7",
                                   "8", "9", "10", "J", "Q", "K"};

Deck::Deck() {
  for (int i = 0; i < suits.size(); i++) {
    for (int k = 0; k < values.size(); k++) {
      deck.push_back(Card(suits[i], values[k]));
    }
  }
  Deck::shuffle_deck();
}

void Deck::display_deck() {
  for (int i = 0; i < deck.size(); i++) {
    std::cout << "Card - Suit: " << deck[i].get_suit()
              << " Value: " << deck[i].get_value() << '\n';
  }
}

void Deck::shuffle_deck() {
  std::random_device seed;
  std::shuffle(deck.begin(), deck.end(), std::default_random_engine(seed()));
}
