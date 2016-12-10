#include <iostream>
#include <vector>
#include <typeinfo>
#include <algorithm>

int main(){
    std::vector<int> numbers;
    int number = 1;
    while (true){
        std::cout << "Input your... numbers. input 666 to stop" << std::endl;
        std::cin >> number;
        if (number == 666){
            break;
        }
        numbers.push_back(number);
    }
    std::sort(std::begin(numbers), std::end(numbers));
    std::cout << "your list, m'lady: " << std::endl;
    for (int i : numbers) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
    return 0;
}
