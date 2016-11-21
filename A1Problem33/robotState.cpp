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
