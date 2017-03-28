#ifndef ROBBYROBOT_TORSO_H
#define ROBBYROBOT_TORSO_H
#include <vector>
#include <string.h>
#include "robot_part.h"
#include "part_types.h"
#include "head.h"
#include "arm.h"
#include "locomotor.h"
#include "battery.h"

class Torso: public RobotPart {
public:
    Torso(  int t_battery_compartments,
            string get_robot_name,
            int get_partNumber,
            partTypes part_types,
            double get_weight,
            double get_cost,
            string get_description
    ):


            batteryCompartments(t_battery_compartments),
            RobotPart(get_robot_name ,
                      get_partNumber,
                      robot_componentType,
                      get_weight,
                      get_cost,
                      get_description) {}

    // Getters
    //Methods

    void setBatteryCompartments(int batteryCompartments) {
        Torso::batteryCompartments = batteryCompartments;
    }


protected:
    int batteryCompartments;




};


#endif //ROBBYROBOT_TORSO_H
