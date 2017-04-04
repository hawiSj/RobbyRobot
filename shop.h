
#ifndef ROBBYROBOT_SHOP_H
#define ROBBYROBOT_SHOP_H


#include "robot_model.h"
#include <iostream>
#include <string>
#include <vector>
#include "Order.h"
//Forward declarations
class Order;
class SalesAssoc;
class Customer;



class Shop {
public:
    void createRobotModel(robot_model* robot);
    void createRobotPart(robot_part* _rob_part);
    void createOrder(Order* _order);
    void createCustomer(Customer* _customer);
    void createSalesAssoc(SalesAssoc* sale_associate);
    void placeOrder();

    int numberOfRobotModels();
    int numberOfCustomers();

    void easterEggModels();
    void printParts();
public:
    vector<RobotPart*> robotParts;
    vector<RobotModel*> robotModels;
    vector<Order*> orders;
    vector<SalesAssoc*> salesAssoc;
    vector<Customer*> customer;
    
};


#endif //ROBBYROBOT_SHOP_H
