#ifndef ROBOT_HEAD_H
#define ROBOT_HEAD_H


#include <iostream>
#include <string>
#include "robot_part.h"

using namespace std;

class Head : public robot_part
{
    friend class Robot_model;

private:
    double power;
public:
    Head (string name,
          int model_number,
          double cost,
          string description,
          string image_filename,
          double power) :

    robot_part(name,
               model_number,
               cost,
               description,
               image_filename), 
    power(power) {}  
};

#endif
