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
    //weapons,armours,accessorys的只读迭代器
    std::vector<Weapon>::const_iterator weapons_cbegin;
    std::vector<Armour>::const_iterator armours_cbegin;
    std::vector<Accessory>::const_iterator accessorys_cbegin;

    //向背包中装武器，装甲，饰品的方法(返回为真则装载成功,返回为假则装载失败)
    bool load_a_weapon_to_bag(Weapon weapon_to_load);
    bool load_a_armour_to_bag(Armour armour_to_load);
    bool load_a_accessory_to_bag(Accessory accessory_to_load);

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
