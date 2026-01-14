#include "Sales_item.h"
#include <iostream>

int main() {
  int count = 0;
  Sales_item activeItem, item;

  if (std::cin >> activeItem) {
    while (std::cin >> item) {
      if (activeItem.isbn() == item.isbn()) {
        ++count;
        std::cout << activeItem.isbn() << " trasaction was successful!\n";
      } else {
        std::cout << "Trasaction Failed!\nActive ISBN: " << activeItem.isbn()
                  << "\nInputted ISBN: " << item.isbn() << '\n';
        break;
      }
    }
  }
  std::cout << activeItem.isbn() << " trasaction count: " << count << '\n';
  return 0;
}
