#include <string>
#include <iostream>
#include "robot_part.h"
using namespace std;


string robot_part::to_string() {
string robot =  "  " + name + ": " + description + " Type is "+part_types.to_string() ;
    return robot;
}

ostream& operator<<(ostream& os, robot_part& rp) {
   os << rp.to_string();
    return os;
}
