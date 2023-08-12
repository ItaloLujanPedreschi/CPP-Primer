#include <iostream>

int main() {
  int i = 42;
  int *p1 = &i;
  int *p2 = 0;
  std::cout << (p1 == nullptr) << std::endl;
  std::cout << (p2 == nullptr) << std::endl;
  return 0;
}