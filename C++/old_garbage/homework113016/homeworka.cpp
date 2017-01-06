#include <iostream>
#include <map>
int main(){
    std::cout << "Homework that Kyle hasn't made:" << std::endl;
    std::map <int, std::string> kylesNotHomework;
    kylesNotHomework[1] = "Const references";
    kylesNotHomework[2] = "STL libraries";
    kylesNotHomework[3] = "Vectors and stuff";
    for (int i = 1; i <= 3; i += 1) {
        std::cout << kylesNotHomework[i] << std::endl;
    }
    return 0;
}
