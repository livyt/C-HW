#include <iostream>
#include "math.h"
int main() {
  std::vector<double> meme = {1, 2, 3, 4, 5};
  std::vector<double> help = {5, 4, 3, 2, 1};
  std::vector<double> even = {5, 8, 123, 8, 43, 43, 54, 9, 43, 1};
  //TESTING DIFFERENCE
  /*std::vector<double> noiy = mmath::difference(meme, help);
  for (double i : noiy) {
    std::cout << i << ", ";    
  }
  std::cout << "" << std::endl;
  */

  //TEST MEDIAN
  /*double median = mmath::median_machine(even);
  std::cout << median << std::endl;
  */
  
  //TEST AVG
  /*double avg = mmath::avg_array(even);
  std::cout << avg << std::endl;
  */

  //TEST MODE
  /*double mode = mmath::mode(even);
  std::cout << "mode should be 43: " << mode << std::endl;
  */

  return 0;
}
