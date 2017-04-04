#include <cstdlib>
#include <iostream>
#include <string>
#include "robot_model.h"
#include "robot_part.h"
#include "arm.h"
#include "battery.h"
#include "head.h"
#include "locomotor.h"

using namespace std;

//double Robot_model :: cost() {}
//double Robot_model :: max_speed() {}
//double Robot_model :: max_battery_life() {}



Robot_model::Robot_model( Vector<robot_part *> &robotParts, const String &name, int modelNumber, double price)
        : robotParts(robotParts), name(name), modelNumber(modelNumber), price(price) {}

		const Vector<robot_part *> &Robot_model::getRobotParts() const {
			    return robotParts;
		}

		const string &RobotModel::getName() const {
			    return name;
		}

		int Robot_model::getModelNumber() const {
			    return modelNumber;
		}

		double Robot_model::getPrice() const {
			    return price;
		}

		double componetCost();



		void Robot_model::addRobotPart(robot_part* rp){
			    robotParts.push_back(rp);
		}
		void Robot_model::easterEggParts(){
			    addRobotPart(new Head(true, "RobotHead",43, part_types::head, 13.6, 19.99, "It's an arm that can hold a cup"));
				    addRobotPart(new Arm(22, 22,"RobotArm",43, part_types::arm, 13.6, 19.99, "It's an arm that can hold a cup"));
		}

		double Robot_model::componetCost() {
			    double totalCost = 0;
				    for ( int i = 0; i < robotParts.size(); i++)
						    {
								        totalCost += robotParts[i]->get_cost();
										    }
											    return totalCost;
		}
		string Robot_model::to_string(){
			    string temp = name + ":\n"  ;
				    for (int i = 0; i < robotParts.size(); ++i){
						        temp += robotParts[i]->to_string() + "\n";
								    }
									    return temp;
		}







