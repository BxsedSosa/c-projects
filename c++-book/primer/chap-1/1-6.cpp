#include "Sales_item.h"
#include <iostream>

int main() {

  Sales_item total;

  if (std::cin >> total) {
    Sales_item trans;

    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total += trans;
      } else {
        std::cout << total << '\n';
        total = trans;
      }
    }
    std::cout << total << '\n';
  } else {
    std::cerr << "No data?!" << '\n';
    return -1;
  }
  return 0;
}
