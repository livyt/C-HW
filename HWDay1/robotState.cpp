#include <iostream>
#include "robotState.h"
namespace robot {
bool piece_ = false;
int position_ = 0;
int arm_position_ = 0;
int score_ = 0;
bool RobotState::has_piece() const { return piece_; }
int RobotState::get_position() const { return position_; }
int RobotState::get_arm_position() const { return arm_position_; }
int RobotState::get_score() const { return score_; }

// things that do stuff
void RobotState::Drive(int distance) {
  position_ += distance;
  std::cout << "Robot is now at position " << position_ << std::endl;
}
void RobotState::MoveArmTo(int position) {
  arm_position_ += position;
  std::cout << "Robot arm is now at position " << arm_position_ << std::endl;
}
void RobotState::ScorePiece() {
  if (has_piece() && position_ == 6 && arm_position_ == 10) {
    score_ += 1;
    piece_ = false;
    std::cout << "AYy!! Your robot scored a point!" << std::endl;
  } else {
    std::cout << "Huh? Your robot can't score!" << std::endl;
  }
}
void RobotState::PickUpPiece() {
  if (arm_position_ == 0 && !has_piece()) {
    piece_ = true;
    std::cout << "Your robot picked up a game piece." << std::endl;
  } else {
    std::cout << "Your robot can't pick up a piece!" << std::endl;
  }
}
}
