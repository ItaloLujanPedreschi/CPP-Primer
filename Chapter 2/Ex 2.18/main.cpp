#include <iostream>

int main() {
  int a = 10, b = 20;
  int *ptr = &a;
  std::cout << ptr << std::endl;
  ptr = &b;
  std::cout << ptr << std::endl;
  return 0;
}