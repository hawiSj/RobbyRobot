#ifndef ROBBYROBOT_BATTERY_H
#define ROBBYROBOT_BATTERY_H

//#include "ComponetType.h"
#include "robot_part.h"
#include "part_types.h"
#include <string.h>


class Battery: public RobotPart {
public:
    Battery(int robot_energy,
            int robot_maxPower,
            string get_robot_name,
            int get_partNumber,
            partTypes part_Types, 
            double get_weight,
            double get_cost,
            string get_description
    ):

            energy(robot_energy),
            maxPower(robot_maxPower),

            RobotPart(get_robot_name ,
                      get_partNumber,
                      robot_componentType, 
                      get_weight,
                      get_cost,
                      get_description) {}

// Getters
    int getEnergy() const { return energy; }
    int getPowerBurn() const { return PowerBurn;}

protected:
    int energy;
    int PowerBurn;


};

#endif //ROBBYROBOT_BATTERY_H
