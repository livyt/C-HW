#ifndef MATH_H_
#define MATH_H_
#include <vector>

namespace mmath{

std::vector<double> CapArray(std::vector<double>, double, double);
std::vector<double> Difference(std::vector<double>, std::vector<double>);
double MedianMachine(std::vector<double>);
double CapDouble(double, double, double);
double AvgArray(std::vector<double>);
double Mode(std::vector<double>);
bool Sign(double);

}
#endif //MATH_H_
