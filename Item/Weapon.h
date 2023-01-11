#include "Equipment.h"

#ifndef CAVE_EXPLORE_WEAPON_H
#define CAVE_EXPLORE_WEAPON_H


class Weapon: public Equipment {
public:
    Weapon();
    Weapon(int weapon_level);
    ~Weapon();
protected:
    int add_attack_power;
};


#endif //CAVE_EXPLORE_WEAPON_H
