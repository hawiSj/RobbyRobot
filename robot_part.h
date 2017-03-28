
#ifndef ROBOTPART_H
#define ROBOTPART_H
#include "part_type.h"
#include "RobotModel.h"


#include <iostream>
#include <string>

using namespace std;

class RobotPart {
public:
    RobotPart(string part_name,
              int part_number,
              partTypes part_types, 
              double part_weight,
              double part_cost,
              string part_description, 
	      string part_image_filename):


            name(part_name),
            partNumber(part_number),
            partTypes(part_types), 
            weight(part_weight),
            cost(part_cost),
            description(part_description),
	    imageFilename(part_image_filename) { }


    virtual string to_string();

    virtual int getMaxSpeed() { rgeteturn 0;};

    friend ostream& operator<<(ostream& a, RobotPart& b);


    string get_p_name() { return name;};
    int    get_p_number() { return partNumber;};
    double get_p_weight() { return weight;};
    double get_p_cost() { return cost;};
    string get_p_description() {return description;
    string get_p_imageFilename() {return imageFilename;}};

   const partTypes &getpartTypes() const { return partTypes; }


    class Invalid_part { };

protected:
    string name;
    int partNumber;
    partTypes part_types; 
    double weight;
    double cost;
    string description;
    string imageFilename;
};
#endif //ROBOTPART_H

   
