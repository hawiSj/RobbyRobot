#ifndef ROBOT_LOCOMOTOR_H
#define ROBOT_LOCOMOTOR_H

#include "robot_part.h"
#include "part_types.h"

class Locomotor : public RobotPart {
public:
    Locomotor(int l_maxPower,
              string get_part_name="locomotor",
              int get_partNumber,
              partTypes part_Types,
              double get_weight,
              double get_cost,
              string get_description
    ):

            maxPower(l_maxPower),

            RobotPart(get_part_name,
                      get_partNumber,
                      get_part_Types, 
                      get_weight,
                      get_cost,
                      get_description) {}

    int powerConsumed(int speed) {return speed;};

    int getMaxPower(int maxPower) {
        return maxPower;
    }


protected:
    int maxPower;


};
#endif //ROBOT_LOCOMOTOR_H
