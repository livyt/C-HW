#include <iostream>
#include <cmath>
int main() {
    std::cout << "NUMBER???????" << std::endl;
    double number;
    std::cin >> number;
    if (number == 0) {
        std::cout << number << std::endl;
    }else {
        number = pow(pow(number, 2), 0.5);
        std::cout << number << std::endl;
    }
    return 0;
}
