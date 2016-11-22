#include <iostream>
#include "robotState.h"

int main() {
    robotState robot;
    while( true ) {
        //just getting the what you want to do
        std::cout << "Whatcha wanna do " << std::endl;
        std::string choice;
        std::cin >> choice;
        if (choice == "drive") {
            std::cout << "how far" << std::endl;
            int distance;
            std::cin >> distance;
            robot.drive(distance, robot);
        }
    break;
    }
    return 0;
}


