#ifndef ROBOT_MODEL_H
#define ROBOT_MODEL_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "robot_part.h"
#include "arm.h"
#include "battery.h"
#include "head.h"
#include "locomotor.h"
#include "torso.h"

using namespace std;

class Robot_model
{
private:
    string name;
    int model_number;
    Torso torso;
    Head head;
    Locomotor locomotor;
    Arm arm;
    Battery battery;


public:
    Robot_model (string name,
                 int model_number,
                 Torso torso,
                 Head head,
                 Locomotor locomotor,
                 Arm arm,
                 Battery battery) :

    name(name),
    model_number(model_number),
    torso(torso),
    head(head),
    locomotor(locomotor),
    arm(arm),
    battery(battery) {}

    double cost();
    double max_speed();
    double max_battery_life();
};

#endif
