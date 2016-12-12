#include "robotState.h"
#include "gtest/gtest.h"

TEST(RobotState, HasPiece){
  robot::robotState testrobot;
  EXPECT_FALSE(testrobot.hasPiece());
  testrobot.pickUpPiece();
  EXPECT_TRUE(testrobot.hasPiece());
}

TEST(RobotState, AllInOne){
  robot::robotState testrobot;
  int oldscore = testrobot.getScore();
  testrobot.pickUpPiece();
  testrobot.drive(6);
  EXPECT_EQ(testrobot.getPosition(), 6);
  testrobot.moveArmTo(10);
  EXPECT_EQ(testrobot.getArmPosition(), 10);
  testrobot.scorePiece();
  EXPECT_TRUE(testrobot.getScore() - 1 == oldscore);
}
