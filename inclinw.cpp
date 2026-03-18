#include <iostream>

inline int sum_of_two_numbers(int a, int b) {
  return a + b;
}

int main() {
  int x, y;
  std::cout << "Enter two integers: ";
  std::cin >> x >> y;

  int sum = sum_of_two_numbers(x, y);
  std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;

  return 0;
}

