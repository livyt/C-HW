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
    return getPosition;
}
int robotState::getArmPosition() {
    return armPosition;
}   
int robotState::getScore() {
    return score;
}
void Drive(int distance, int position) {            
    position += distance;
    std::cout << "Robot is now at position" << position << std::endl;
}
void MoveArmT(int position, int armPosition) {
    armPostition = position
    std::cout << "Robot arm is now at position" << armPosition << std::endl;
}
/*void ScorePiece() {
    if (robot.hasPiece() && robot.position == 6 && robot.armPosition == 10) {
        robot.score += 1;
        std::cout << "AYy!! Your robot scored a point!" << std::endl;
    }else{
        std::cout << "Huh? Your robot can't score!" << std::endl;
    }   
}*/
void PickUpPiece() {
           
}
