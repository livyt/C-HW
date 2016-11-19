#include <iostream>
int main() {
    std::cout << "Name????" << std::endl; //first printy
    std::string name; //declarin it
    std::cin >> name; //getting the input
    std::cout << "How old are you, " << name << "?" << std::endl;
    int age;
    std::cin >> age;
    if ( age < 10 ) { //a real nice if statement.
        std::cout << name <<", what the heck are you doing, playing around with a computer??" << std::endl;
    }else if ( age < 55 ){
        std::cout << "You know, " << name << ", you should have learned by now that looking at a computer all the time like this will desroy your eyeballs." << std::endl;
    }else{
        std::cout << "Hello, " << name << "." << std::endl; //i cant think of anything
    }
    
    return 0;
}
C-HW
