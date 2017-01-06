#include "math.h"
#include <vector>
#include "gtest/gtest.h"
#include <algorithm>
std::vector<double> test = {1, 93, 6, 2, 46, 16, 8};
std::vector<double> test2 = {432, 3, -32, 1, 0, 7, 2};
std::vector<double> test3 = {0, 432, 3, -32, 1, 0, 7, 2};

TEST(MathFunctions, CapArray){
  for(double i : mmath::CapArray(test, 0, 10)){
    EXPECT_NEAR(i, 6, 6.00001);//6 is half of 12??
  }
}

TEST(MathFunctions, Difference){
  //output1 + i = output2
  std::vector<double> diftest = mmath::Difference(test, test2);
  for(int i; i < test.size(); ++i){
    EXPECT_NEAR(test[i] + diftest[i], test2[i], 1e-5);   
  }
}

//Not sure how to test median?
//a a a M b b b
//^ sorted, M=Median
//all a's added together < M < all b's added together
TEST(MathFunctions, MedianOddSize){
  double testmedian = mmath::MedianMachine(test);
  double leftside;
  double rightside; 
  std::vector<double> sortedtest = test;//here lies what was once one of the most DUMBASS mistakes I have ever made. R.I.P. 
  std::sort(std::begin(sortedtest), std::end(sortedtest));
  for(int i = 0; i < (sortedtest.size() - 1) / 2; ++i){//going over left half, excluding median
    leftside += sortedtest[i];
  }
  for(int i = (sortedtest.size() + 1) / 2; i < sortedtest.size(); ++i){ //going down right half??? idk lol
    rightside += sortedtest[i];
  }
  EXPECT_GT(testmedian * (sortedtest.size() - 1) / 2, leftside);
  EXPECT_GT(rightside, testmedian * (sortedtest.size() - 1) / 2);
  //EXPECT_LT(testmedian * 3, rightside);
}

TEST(MathFunctions, MedianEvenSize){
  double testmedian = mmath::MedianMachine(test3);
  double leftside;
  double rightside;
  std::vector<double> sortedtest = test3;
  std::sort(std::begin(sortedtest), std::end(sortedtest));
  for(int i = 0; i < sortedtest.size() / 2; ++i){
    leftside += sortedtest[i];
  }
  for(int i = sortedtest.size() / 2; i <= sortedtest.size(); ++i){
    rightside += sortedtest[i];
  }
  double sidelength = sortedtest.size() / 2;
  EXPECT_GT(testmedian * sidelength, leftside);
  EXPECT_GT(rightside, testmedian * sidelength);
}

TEST(MathFunctions, CapDouble){
  double testdouble = mmath::CapDouble(88.3421, 68, 88);
  EXPECT_NEAR(testdouble, 78, 10.00001);
}

TEST(MathFunctions, AvgByMultiplying){
  double testavg = mmath::AvgArray(test2);
  double arraytotal = std::accumulate(test2.begin(), test2.end(), 0.0);
  EXPECT_NEAR(testavg * test2.size(), arraytotal, 1e-5);
}

TEST(MathFunctions, AvgByWithinRange){
  double testavg = mmath::AvgArray(test2);
  std::vector<double> testarray = test2;
  std::sort(std::begin(testarray), std::end(testarray));
  double middle = (testarray[0] + testarray[testarray.size() - 1]) / 2;
  double dist = middle - testarray[0];
  EXPECT_NEAR(testavg, middle, dist);
}
