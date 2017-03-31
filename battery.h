#ifndef ROBOT_BATTERY_H
#define ROBOT_BATTERY_H

#include <iostream>
#include <string>
#include "robot_part.h"


class Battery : public robot_part
{
    friend class Robot_model;

private:
    double power_available;
    double max_energy;

public:
    Battery (string name,
             int model_number,
             double cost,
             string description,
             string image_filename,
             double power_available,
             double max_energy) :

    robot_part(name,
               model_number,
               cost, description,
               image_filename),
    power_available(power_available), 
    max_energy(max_energy) {}
    
};

#endif
