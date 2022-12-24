

#include "Bag.h"
//默认背包容量:武器:2,盔甲:1,饰品:5
Bag::Bag() {
    this->weapon_contain_count=2;
    this->weapon_current_count=0;
    this->weapons.clear();

    this->armour_contain_count=1;
    this->armour_current_count=0;
    this->armours.clear();

    this->accessory_contain_count=5;
    this->accessory_current_count=0;
    this->accessorys.clear();

}