#ifdef _MSC_VER
#include"stdafx.h"
#endif
#include "robot_part.h"
#include <string>
#include <iostream>

using namespace std;

ostream& operater<<(ostream& os,robot_part& rp);

string robot_part::to_string() {
string robot =  "  " + name + ": " + description + " Type is "+part_types.to_string() ;
    return robot;

}



ostream& operator<<(ostream& os, robot_part& rp) {
   os << rp.to_string();
    return os;
}
