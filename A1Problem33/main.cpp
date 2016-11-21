#include <iostream>

class Rotbot {
    
    int Drive(int distance) {            
        robot.position += distance;
        std::cout << "Robot is now at position" << robot.position << std::endl;
    }
    int MoveArmT(int position) {
        robot.armPostition = position
        std::cout << "Robot arm is now at position" << robot.armPosition << std::endl;
    }
    int ScorePiece() {
    
    }
    int PickUpPiece() {
        
    }
};
