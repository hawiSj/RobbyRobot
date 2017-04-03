#ifndef PART_TYPES_H
#define PART_TYPES_H
#include <iostream>
#include <string>

using namespace std;

class PartTypes {
public:
    PartTypes(int val) : value(val) { }

    static const int head = 0;
    static const int locomotor = 1;
    static const int torso = 2;
    static const int battery = 3;
    static const int arm = 4;

    //static const int num_types = 5;

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

    
    
    
#endif
