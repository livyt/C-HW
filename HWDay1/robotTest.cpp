#include "robotState.h"
#include "gtest/gtest.h"

TEST(RobotState, HasPiece){
  robot::RobotState testrobot;
  EXPECT_FALSE(testrobot.has_piece());
  testrobot.PickUpPiece();
  EXPECT_TRUE(testrobot.has_piece());
}

TEST(RobotState, AllInOne){
  robot::RobotState testrobot;
  int oldscore = testrobot.get_score();
  testrobot.PickUpPiece();
  testrobot.Drive(6);
  EXPECT_EQ(testrobot.get_position(), 6);
  testrobot.MoveArmTo(10);
  EXPECT_EQ(testrobot.get_arm_position(), 10);
  testrobot.ScorePiece();
  EXPECT_TRUE(testrobot.get_score() - 1 == oldscore);
}
