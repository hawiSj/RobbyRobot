#include "shop.h"
#include "robot_model.h"
#include "robot_part.h"
#include "arm.h"
#include "torso.h"
#include "locomotor.h"
#include "head.h"
#include "arm.h"
#include "battery.h"
#include "salesAssoc.h"


using namespace std;
void Shop:: createRobotModel(robot_model* _robot){
    robot_models.push_back(_robot);
}

void Shop:: createRobotPart(robot_part* _rob_part){
    robot_parts.push_back(_rob_part);
}

void Shop::createOrder(Order* _order){
    orders.push_back(_order);
}

void Shop::createCustomer(Customer* _customer){
    customer.push_back(_customer);
}

void Shop::createSalesAssoc(SalesAssoc* sale_associate){
    sales_Assoc.push_back(sale_associate);
}

int Shop::numberOfRobotModels() {
    return robot_models.size();
}

void Shop::printParts() {
    for (int i=0; i< robot_parts.size() ; ++i){
        cout << i << " " << robot_parts[i]->get_name() << endl;

    }
}

