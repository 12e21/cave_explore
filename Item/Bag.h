#include "Equipment.h"
#include "Weapon.h"
#include "Armour.h"
#include "Accessory.h"
#include "vector"
#ifndef CAVE_EXPLORE_BAG_H
#define CAVE_EXPLORE_BAG_H


class Bag:Equipment {
public:
    Bag();
    ~Bag();
private:
    int weapon_contain_count;
    int weapon_current_count;
    int armour_contain_count;
    int armour_current_count;
    int accessory_contain_count;
    int accessory_current_count;
    std::vector<Weapon> weapons;
    std::vector<Armour> armours;
    std::vector<Accessory> accessorys;
};


#endif //CAVE_EXPLORE_BAG_H
