#include "robot_part.h"
#include "robot_model.h"
#include "part_types.h"
//#include "lib_facilities.h"
#include <string>
#include <iostream>

using namespace std;

string robot_part::to_string() {
string robot =  "  " + name + ": " + description + " Type is "+part_types.to_string() ;
    return robot;

}



ostream& operator<<(ostream& a, robot_part& b) {
    a << b.to_string();
    return a;
}
