#ifndef LOCOMOTOR_H
#define LOCOMOTOR_H

#include <iostream>
#include <string>
#include "robot_part.h"

using namespace std;

class Locomotor : public robot_part
{
    friend class Robot_model;

private:
    double max_power;

public:
    Locomotor (string name,
               int model_number,
               double cost,
               string description,
               string image_filename,
               double max_power) :

    robot_part(name,
               model_number,
               cost,
               description, 
               image_filename), 
    max_power(max_power) {}
    
    
};

#endif
