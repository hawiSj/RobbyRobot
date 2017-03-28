
#ifndef ROBOT_ARM_H
#define ROBOT_ARM_HS
#include "robot_part.h"
#include "part_types.h"
#include <string>


class Arm : public RobotPart {
public:
    Arm(int robot_energy,
            int robot_maxPower,
            string get_name =  ,
            int get_partNumber,
            partTypes part_Types, 
            double get_weight,
            double get_cost,
            string get_description
    ):

            energy(robot_energy),
            maxPower(robot_maxPower),

            RobotPart(get_name ,
                      get_partNumber,
                      component_type, 
                      get_weight,
                      get_cost,
                      get_description) {}
    // Getters

    int get_maxPower () const {return energy;}
    int get_powerBrun() const { return power_Burn;}

protected:
    int max_power;





};
#endif //ROBOT_ARM_H
