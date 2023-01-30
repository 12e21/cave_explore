
#include "Equipment.h"
#ifndef CAVE_EXPLORE_ARMOUR_H
#define CAVE_EXPLORE_ARMOUR_H


class Armour: public Equipment {
public:
    //构造&析构函数
    Armour();
    Armour(int armour_level);
    ~Armour();
    //属性
    double get_add_defend_power();
    void set_add_defend_power(int add_defend_power_to_set);
protected:
    double add_defend_power;
};


#endif //CAVE_EXPLORE_ARMOUR_H
