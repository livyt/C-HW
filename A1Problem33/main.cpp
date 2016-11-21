#include <iostream>

int main() {
    robotState robot;
    while( true ) {
        //just getting the what you want to do
        break;
    }

    return 0;
}

void Drive(int distance) {            
    robot.position += distance;
    std::cout << "Robot is now at position" << robot.position << std::endl;
}
void MoveArmT(int position) {
    robot.armPostition = position
    std::cout << "Robot arm is now at position" << robot.armPosition << std::endl;
}
void ScorePiece() {
    if (robot.hasPiece() && robot.position == 6 && robot.armPosition == 10) {
        robot.score += 1;
        std::cout << "AYy!! Your robot scored a point!" << std::endl;
    }else{
        std::cout << "Huh? Your robot can't score!" << std::endl;
    }   
}
void PickUpPiece() {
           
}
