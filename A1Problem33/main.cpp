#include <iostream>

int main() {
    robotState robot;
    /*while( true ) {
        //just getting the what you want to do
        break;
    }*/
    Drive(8, robot.position);
    return 0;
}

int Drive(int distance, int position) {            
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
