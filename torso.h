#ifndef ROBOT_TORSO_H
#define ROBOT_TORSO_H

#include <iostream>
#include <string>
#include "robot_part.h"

using namespace std;

class Torso : public robot_part
{
    friend class Robot_model;

private:
    int battery_compartments;
    int max_arms;

public:
    Torso (string name,
           int model_number,
           double cost,
           string description,
           string image_filename,
           int battery_compartments,
           int max_arms) :

    robot_part(name,
               model_number,
               cost,
               description,
               image_filename),
               battery_compartments(battery_compartments),
               max_arms(max_arms) {}
    
};

#endif
