#include <iostream>

int main() {
  int val = 10;
  while (val >= 0) {
    std::cout << "Val equals: " << val << '\n';
    --val;
  }
  return 0;
}
