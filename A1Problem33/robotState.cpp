#include <iostream>
#include "robotState.h"

    bool piece = false;
    int position = 0;
    int armPosition = 0;
    int score = 0;
bool robotState::hasPiece() {
    return piece;
}
int robotState::getPosition() {
    return position;
}
int robotState::getArmPosition() {
    return armPosition;
}   
int robotState::getScore() {
    return score;
}

//things that do stuff
void robotState::drive(int distance, robotState robot) {            
    robot.position = distance;
    std::cout << "Robot is now at position " << distance << std::endl;
}
void robotState::moveArmTo(int position, robotState robot) {
    robot.armPosition = position;
    std::cout << "Robot arm is now at position " << armPosition << std::endl;
}
void robotState::scorePiece(robotState robot) {
    if (robot.hasPiece() && robot.position == 6 && robot.armPosition == 10) {
        robot.score += 1;
        robot.piece = false;
        std::cout << "AYy!! Your robot scored a point!" << std::endl;
    }else{
        std::cout << "Huh? Your robot can't score!" << std::endl;
    }   
}
void robotState::pickUpPiece(robotState robot) {
    if (robot.armPosition == 0 && !robot.hasPiece()){
        robot.piece = true;
        std::cout << "Your robot picked up a game piece." << std::endl;
    }else{
        std::cout << "Your robot can't pick up a piece!" << std::endl;
    }
}
