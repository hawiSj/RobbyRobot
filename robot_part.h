#ifndef ROBOT_PART_H
#define ROBOT_PART_H

#include <iostream>
#include <string>

using namespace std;

class robot_part
{
protected:
    string name;
    int model_number;
    double cost;
    string description;
    string image_filename;

public:
    robot_part (string name,
                int model_number,
                double cost,
                string description,
                string image_filename) :

    name(name),
    model_number(model_number),
    cost(cost),
    description(description),
    image_filename(image_filename) {}
    
};

#endif




