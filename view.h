#ifndef ROBOT_VIEW_H
#define ROBOT_VIEW_H

#include "shop.h"


class View{
public:
	View(Shop& sp):shop(sp){}
    void show_main_menu();
    void create_menu();
    void show_parts();
    void report_menu();

private:
    Shop& shop;

};


#endif //ROBOT_VIEW_H
