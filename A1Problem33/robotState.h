#ifndef ROBOTSTATE_H_
#define ROBOTSTATE_H_

class robotState {
    private:
        bool piece;
        int position;
        int armPosition;
        int score;
    bool hasPiece();
    int getPosition();
    int getArmPosition();
    int getScore();
    public:
    void drive(int distance, robotState robot);
    void moveArmTo(int position, robotState robot);
    void scorePiece(robotState robot);
    void pickUpPiece(robotState robot);
};
#endif
