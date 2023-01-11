#include "Equipment.h"

#ifndef CAVE_EXPLORE_WEAPON_H
#define CAVE_EXPLORE_WEAPON_H


class Weapon: public Equipment {
public:
    Weapon();
    Weapon(int weapon_level);
    ~Weapon();
    int get_add_attack_power();
    void set_add_attack_power(int add_attack_power_to_set);
protected:
    int add_attack_power;
};


#endif //CAVE_EXPLORE_WEAPON_H
