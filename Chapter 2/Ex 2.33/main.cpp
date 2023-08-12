#include <iostream>

int main() {
  auto i = 0, &r = i; // i is int, r is reference to an int
  auto a = r; // a is int
  const int ci = i, &cr = ci; // ci is a const int, cr is a reference to a const int
  auto b = ci; // b is an int (since ci is a const int, the const in "const int"
               // is the top level const which is dropped when using "auto")
  auto c = cr; // c is an int since cr is a reference to a const int, and the top level const is dropped
  auto d = &i; // d is a pointer to an int, int*, because the & of an int object is int*
  std::cout << "&i: " << &i << std::endl;
  auto e = &ci; // e is a pointer to a const int since ci is a "const int" and we have the & of ci
                // taking the & of a const object makes it a low level const
  const auto f = ci; // f is a const int
  auto &g = ci; // g is a reference to a const int
  a = 42; // will work since a is an int
  b = 42; // will work since b is an int because the const was dropped when copying ci
  c = 42; // will work since c is a is an int
  // d = 42; // will not work because to cannot assign a int value to a variable with the type of a pointer to an int
  // e = 42; // will not work for same reason as d
  // g = 42; // will not work because g is a reference to a const int which cannot be modified
  return 0;
}