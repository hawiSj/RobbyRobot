#ifndef ROBOT_HEAD_H
#define ROBOT_HEAD_H

#include "robot_part.h"
#include "part_types.h"

class Head: public RobotPart {
public:
    //Constructor
    Head(   bool head_type,
            string part_h_name ="Head",
            int part_number,
            partTypes part_Types, 
            double part_weight,
            double part_cost,
            string part_description):
	
	//name(part_name){}

            type(head_type),
            RobotPart(part_name ,
                      part_number,
                      part_types, 
                      part_weight,
                      part_cost,
                      part_description) {}


    // Getters
    bool getType() const { return type; }
    /*string get_p_name() { 
			if (name.compare(part_h_name)!=0{ cout<<"You created the Head :)"<<endl;
}else{ cout<<"Head was not created :("<<endl;}
	return name;};
*/
protected:
    bool type;
    string name;


};
#endif //ROBOT_HEAD_H
