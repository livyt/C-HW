#include "robotState.h"

TEST(RobotState, HasPiece){
  robotState testrobot;
  EXPECT_EQ(testrobot.hasPiece, piece);
}

