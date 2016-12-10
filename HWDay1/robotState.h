#ifndef ROBOTSTATE_H_
#define ROBOTSTATE_H_
namespace robot {
class robotState {
private:
  bool piece = false;
  int position = 0;
  int armPosition = 0;
  int score = 0;
  bool hasPiece() const;
  int getPosition() const;
  int getArmPosition() const;
  int getScore() const;

public:
  void drive(int distance);
  void moveArmTo(int position);
  void scorePiece();
  void pickUpPiece();
};
}
#endif
