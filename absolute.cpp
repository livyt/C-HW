#include <iostream>
#include "absolute.h"
int main() {
    std::cout << "NUMBER???????" << std::endl;
    double number;
    std::cin >> number;
    std::cout << "The absolute value of your number is " << absolute(number) << std::endl;
    return 0;
}
int absolute(int number){
    if (number >= 0){
        return number;
    }else if (number < 0){
        return number * -1;
    }
}
