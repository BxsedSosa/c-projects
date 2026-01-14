#include <iostream>

int main() {
  int num1, num2;
  num1 = num2 = 0;
  std::cout << "Enter number 1:\n>>> ";
  std::cin >> num1;
  std::cout << "Enter number 2:\n>>> ";
  std::cin >> num2;
  std::cout << "The product of " << num1 << " times " << num2
            << " is: " << num1 * num2 << '\n';
  return 0;
}
