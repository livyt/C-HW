#include <iostream>
#include <vector>
#include "math.h"
#include <algorithm>

std::vector<double> mmath::cap_array(std::vector<double> input, double min, double max){
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

std::vector<double> mmath::difference(std::vector<double> input1, std::vector<double> input2){
  std::vector<double> output = input1;
  int j = 0;
  for (double i : input2) {
    output[j] -= i;
    j += 1; 
  }
  return output;
}

double mmath::median_machine(std::vector<double> input){
  std::sort(std::begin(input), std::end(input));
  if (input.size() % 2 != 0) {
    return input[(input.size() - 1) / 2];
  }else{
    double num1 = input[(input.size() - 2) / 2];
    //std::cout << "num1 " << num1 << std::endl;
    double num2 = input[input.size() / 2];
    //std::cout << "num2 " << num1 << std::endl;
    double finl = (num1 + num2) / 2; 
    //std::cout << "finl " << finl << std::endl;
    return finl;
  }
}

double mmath::cap_double(double input, double min, double max){
  if (input < min) {
    return min;
  }else if (input > max) {
    return max;
  }else{
    return input;
  }
}

double mmath::avg_array(std::vector<double> input){
  double output = 0;
  for (double i : input) {
    output += i;
  }
  output /= input.size();
  return output;
}

double mmath::mode(std::vector<double> input){
  std::sort(std::begin(input), std::end(input));
  //1, 5, 8, 8, 9, 43
  int counter = 1; //counter of how many times a number repeats
  int max = 0;
  double mode = input[0];
  for (int i = 0; i < input.size() - 1; i++) {
    if (input[i] == input[i + 1]){
      counter += 1; //if it's the same number counter increases
      if (counter > max){
        max = counter;
        mode = input[i];
      }
    }else{
      counter = 1; //reset counter
    }
  }
  return mode;
}

bool mmath::sign(double input){ //true=positive false=negative
 return (!(input < 0));
}
