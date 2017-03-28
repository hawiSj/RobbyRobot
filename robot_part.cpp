#include "robot_part.h"
#incliude "RobotModel.h"
#include <string>
#include <iostream>

using namespace std;

int main(){ return 0;}
string RobotPart::to_string() {
    string robby =  "  " + name + ": " + description + " Type is "+componentType.to_string() ;
    return robby;

}



ostream& operator<<(ostream& a, RobotPart& b) {
    a << b.to_string();
    return a;
}
