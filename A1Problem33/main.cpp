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
            std::cout << "to where" << std::endl;
            int distance;
            std::cin >> distance;
            robot.drive(distance, robot);
        }else if (choice == "piece"){
            robot.pickUpPiece(robot);
        }else if (choice == "score"){
            robot.scorePiece(robot);
        }else if (choice == "mvarm"){
            std::cout << "to where?" << std::endl;
            int position;
            std::cin >> position;
            robot.moveArmTo(position, robot);
        }else{
            std::cout << "what?" << std::endl;
        }
    }
    return 0;
}


