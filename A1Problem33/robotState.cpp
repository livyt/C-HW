#include <iostream>
#include "robotState.h"
namespace robot{    
    bool piece = false;
    int position = 0;
    int armPosition = 0;
    int score = 0;
bool robotState::hasPiece() const{
    return piece;
}
int robotState::getPosition() const{
    return position;
}
int robotState::getArmPosition() const{
    return armPosition;
}   
int robotState::getScore() const{
    return score;
}

//things that do stuff
void robotState::drive(int distance) {            
    position += distance;
    std::cout << "Robot is now at position " << position << std::endl;
}
void robotState::moveArmTo(int position) {
    armPosition += position;
    std::cout << "Robot arm is now at position " << armPosition << std::endl;
}
void robotState::scorePiece() {
    if (hasPiece() && position == 6 && armPosition == 10) {
        score += 1;
        piece = false;
        std::cout << "AYy!! Your robot scored a point!" << std::endl;
    }else{
        std::cout << "Huh? Your robot can't score!" << std::endl;
    }   
}
void robotState::pickUpPiece() {
    if (armPosition == 0 && !hasPiece()){
        piece = true;
        std::cout << "Your robot picked up a game piece." << std::endl;
    }else{
        std::cout << "Your robot can't pick up a piece!" << std::endl;
    }
}
}
