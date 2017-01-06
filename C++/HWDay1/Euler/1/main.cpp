#include <iostream>

int main() {
  int total = 0;
  for (int i = 3; i < 1000; i += 1) {
    if (i % 3 == 0 || i % 5 == 0) {
      total += i;
    }
  }
  std::cout << "Total: " << total << std::endl;
  return 0;
}
