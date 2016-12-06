#include <iostream>
#include <vector>
#include "math.h"
#include <algorithm>

std::vector<double> cap_array(std::vector<double> input, double min, double max){
    std::vector<double> output;
  for (double i : input) {
    if (i < min) {
      output.push_back(min);
    }else if (i > max) {
      output.push_back(max);
    }else{
      output.push_back(i);
    }
  }
  return output;
}

std::vector<double> difference(std::vector<double> input1, std::vector<double> input2){
  std::vector<double> output = input1;
  int j = 0;
  for (double i : input2) {
    output[j] -= i;
    j += 1;
  }
  return output;//
}

double median_machine(std::vector<double> input){
  return 1.1;//
}

double cap_double(double input, double min, double max){
  if (input < min) {
    return min;
  }else if (input > max) {
    return max;
  }else{
    return input;
  }
}

double avg_array(std::vector<double> input){
  return 1.1; //
}

double mode(std::vector<double> input){
  return 1.1; //
}

bool sign(double input){ //true=positive false=negative
 return (!input < 0);
}
