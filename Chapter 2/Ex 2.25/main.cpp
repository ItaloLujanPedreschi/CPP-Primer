#include <iostream>

int main() {
  int i = 42; // Initializes i to 42
  std::cout << "i: " << i << std::endl;
  int *p; // Declares nullpointer p
  int *&r = p; // Initializes r as reference to pointer p
  r = &i; // Sets value of r to address of i, which should make p point at address of i?
  std::cout << "&i: " << &i << std::endl;
  std::cout << "r: " << r << std::endl;
  std::cout << "p: " << p << std::endl;
  std::cout << "i: " << i << std::endl;
  *r = 0; // Sets value in address r to 0, setting value of i to 0?
  std::cout << "r: " << r << std::endl;
  std::cout << "*r: " << *r << std::endl;
  std::cout << "i: " << i << std::endl;
  return 0;
}