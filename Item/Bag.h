#include "Equipment.h"
#include "Weapon.h"
#include "Armour.h"
#include "Accessory.h"
#include "vector"
#ifndef CAVE_EXPLORE_BAG_H
#define CAVE_EXPLORE_BAG_H


class Bag: public Equipment {
public:
    Bag();
    ~Bag();
    std::vector<Weapon> weapons;
    std::vector<Armour> armours;
    std::vector<Accessory> accessorys;

    //向背包中装武器，装甲，饰品的方法(返回为真则装载成功,返回为假则装载失败)
    bool load_a_weapon_to_bag(Weapon weapon_to_load);
    bool load_a_armour_to_bag(Armour armour_to_load);
    bool load_a_accessory_to_bag(Accessory accessory_to_load);
    //按索引取出背包中物品(返回为真则取出成功,返回为假则取出失败)
    bool pop_a_weapon(int weapon_to_pop_index,Weapon& weapon_to_pop);
    bool pop_a_armour(int armour_to_pop_index,Armour& armour_to_pop);
    bool pop_a_accessory(int accessory_to_pop_index,Accessory& accessory_to_pop);
    //读取当前存储数和最大存储数的方法
    int get_weapon_contain_count();
    int get_weapon_current_count();
    int get_armour_contain_count();
    int get_armour_current_count();
    int get_accessory_contain_count();
    int get_accessory_current_count();

protected:
    int weapon_contain_count;
    int weapon_current_count;
    int armour_contain_count;
    int armour_current_count;
    int accessory_contain_count;
    int accessory_current_count;
};


#endif //CAVE_EXPLORE_BAG_H
