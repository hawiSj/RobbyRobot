#ifndef ROBOT_PART_TYPES_H
#define ROBOT_PART_TYPES_H

#include "string"
//#include "std_lib_facilities.h"

class partTypes {
public:
    partTypes(int val) : value(val) { }

    static const int head = 0;
    static const int locomotor = 1;
    static const int torso = 2;
    static const int battery = 3;
    static const int arm = 4;

    static const int num_types = 5;

    string to_string() {
        switch(value) {
            case(head):return "head";
            case(locomotor):return "locomotor";
            case(torso):return "torso";
            case(battery):return "battery";
            case(arm):return "arm";
            default: return "UNKNOWN";
        }
    }
private:
    int value;
};




#endif //ROBOT_PART_TYPES_H 