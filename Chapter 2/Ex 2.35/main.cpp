#include <iostream>

int main() {
  const int i = 42; // i is const int
  auto j = i; // j is int
  const auto &k = i; // k is a reference to a const int
  auto *p = &i; // p is a pointer to the address of const int i?
  auto p2 = &i; // p is a pointer to the address of const int i?
  const auto j2 = i, &k2 = i; // j2 is a const int, k2 is const int
  j = 10; // j can be reassigned, meaning it is an int rather than a const int
  // k = 10; // k is not able to be reassigned since the value it refers to is a const int
  std::cout << "k: " << k << std::endl;
  // &p = 10; // the var at the address pointer p is pointing at is a const int so it cannot be reassigned
  std::cout << "&i: " << &i << std::endl;
  std::cout << "p: " << p << std::endl;
  std::cout << "p2: " << p2 << std::endl;
  // j2 = 10; // j2 is a const int so it cannot be reassigned
  // k2 = 10; // k2 is a reference to a const int so it cannot be reassigned
  std::cout << "k2: " << k2 << std::endl;

  return 0;
}