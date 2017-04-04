#ifndef SALESASSOC_H
#define SALESASSOC_H
#include <vector>
#include <string>
#include <iostream>
#include "Order.h"
#include "shop.h"


using namespace std;

class Order;

class SalesAssoc {
public:

    SalesAssoc(const vector<Order *> &orders, const String &name, int employeeNumber);

    string to_string();

private:
    vector<Order*> orders;
    string name;
    int employeeNumber;

   
};


#endif SALESASSOC_H
