#include <iostream>

int main() {
  int val1, val2;
  val1 = val2 = 0;

  std::cout << "Enter first number:\n>>> ";
  std::cin >> val1;
  std::cout << "Enter second number:\n>>> ";
  std::cin >> val2;

  if (val1 >= val2) {
    int counter = val1;
    while (counter >= val2) {
      std::cout << "Values between " << val1 << " and " << val2
                << " is : " << counter << '\n';
      --counter;
    }
  } else {
    int counter = val2;
    while (counter >= val1) {
      std::cout << "Values between " << val2 << " and " << val1
                << " is : " << counter << '\n';
      --counter;
    }
  }

  return 0;
}
