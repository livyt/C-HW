#include <iostream>

int main() {
  int sum;
  int tn_1 = 0;
  int tn = 1;
  int tn1 = 1;
  int h;
  while ( tn < 4000000 ) {
    if ( tn % 2 == 0 ) {
      sum += tn;
    }
    h = tn_1;
    tn_1 = tn;
    tn = tn1;
    tn1 = tn_1 + tn;
  }
  std::cout << "Solution?: " << sum << std::endl;
  return 0;
}
