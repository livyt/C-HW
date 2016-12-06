#include <iostream>
#include <array>
#include "math.h"
/*double * cap_array(double arr[], double min, double max){
  for (int i : (sizeof(arr)/sizeof(arr[0]))){
    if (arr[i] < min){
      arr[i] = min;
    }
  }
}*/

/*void cap_array(double* arr[], double, double_ {
  for (double i 
}*/

double cap_double(double input, double min, double max){
  if (input < min) {
    return min;
  }else if (input > max) {
    return max;
  }else{
    return input;
  }
}

bool sign(double input){ //true=positive false=negative
 return (!input < 0);
}
