#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item, total;

  while (std::cin >> item) {
    total += item;
    std::cout << "Book transaction: " << total << '\n';
  }

  std::cout << "Completed book transaction: " << total << '\n';

  return 0;
}
