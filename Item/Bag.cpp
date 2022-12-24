

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
//装物品
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
//取物品
bool Bag::pop_a_weapon(int weapon_to_pop_index,Weapon& weapon_to_pop) {
    if((weapon_to_pop_index>this->weapon_current_count)||(weapon_to_pop_index<0))
    {
        return false;
    } else
    {
        weapon_to_pop=this->weapons.at(weapon_to_pop_index);
        this->weapons.erase(this->weapons.cbegin()+weapon_to_pop_index);
        this->weapon_current_count-=1;
        return true;
    }
}

bool Bag::pop_a_armour(int armour_to_pop_index,Armour& armour_to_pop) {
    if((armour_to_pop_index>this->armour_current_count)||(armour_to_pop_index<0))
    {
        return false;
    } else
    {
        armour_to_pop=this->armours.at(armour_to_pop_index);
        this->armours.erase(this->armours.cbegin()+armour_to_pop_index);
        this->armour_current_count-=1;
        return true;
    }
}

bool Bag::pop_a_accessory(int accessory_to_pop_index,Accessory& accessory_to_pop) {
    if((accessory_to_pop_index>this->accessory_current_count)||(accessory_to_pop_index<0))
    {
        return false;
    } else
    {
        accessory_to_pop=this->accessorys.at(accessory_to_pop_index);
        this->accessorys.erase(this->accessorys.cbegin()+accessory_to_pop_index);
        this->accessory_current_count-=1;
        return true;
    }
}