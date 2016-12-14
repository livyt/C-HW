#ifndef ROBOTSTATE_H_
#define ROBOTSTATE_H_
namespace robot {
class RobotState {
private:
  bool piece_ = false;
  int position_ = 0;
  int arm_position_ = 0;
  int score_ = 0;

public:
  bool has_piece() const; //
  int get_position() const; //
  int get_arm_position() const; //
  int get_score() const; //
  void Drive(int distance); //
  void MoveArmTo(int position); //
  void ScorePiece(); //
  void PickUpPiece(); //
};
}
#endif
