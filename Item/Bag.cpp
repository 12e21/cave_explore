

#include "Bag.h"
//默认背包容量:武器:2,盔甲:1,饰品:5
Bag::Bag() {
    this->weapons_cbegin=weapons.cbegin();
    this->armours_cbegin=armours.cbegin();
    this->accessorys_cbegin=accessorys.cbegin();

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
Bag::~Bag()=default;
bool Bag::load_a_weapon_to_bag(Weapon weapon_to_load) {
    if(this->weapon_current_count==this->weapon_contain_count){
        return false;
    } else
    {
        this->weapons.push_back(weapon_to_load);
        this->weapon_current_count+=1;
        return true;
    }
}

bool Bag::load_a_armour_to_bag(Armour armour_to_load) {
    if(this->armour_current_count==this->armour_contain_count){
        return false;
    } else
    {
        this->armours.push_back(armour_to_load);
        this->armour_current_count+=1;
        return true;
    }
}

bool Bag::load_a_accessory_to_bag(Accessory accessory_to_load) {
    if(this->accessory_current_count==this->accessory_contain_count)
    {
        return false;
    } else
    {
        this->accessorys.push_back(accessory_to_load);
        this->accessory_current_count+=1;
        return true;
    }
}