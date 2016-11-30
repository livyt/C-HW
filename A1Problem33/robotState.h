#ifndef ROBOTSTATE_H_
#define ROBOTSTATE_H_

class robotState {
    private:
        bool piece = false;
        int position = 0;
        int armPosition = 0;
        int score = 0;
    bool hasPiece();
    int getPosition();
    int getArmPosition();
    int getScore();
    public:
    void drive(int distance);
    void moveArmTo(int position);
    void scorePiece();
    void pickUpPiece();
};
#endif
