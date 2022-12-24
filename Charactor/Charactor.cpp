
#include "Charactor.h"
//初始化
Charactor::Charactor() {
    this->level=1;
    this->experience_upper_limit=10;
    this->current_experience=0;
    this->blood_upper_limit=10;
    this->current_blood=10;
    this->magic_power=10;
    this->strength_power=10;
    this->name="initial_name";
    this->strength_power_upper_limit=10;
    this->magic_power_upper_limit=10;
    this->attack_power=1;
    this->defend_power=0.02;
}
Charactor::~Charactor() =default;
//属性
int Charactor::get_level() {
    return this->level;
}
void Charactor::set_level(int level_to_set) {
    this->level=level_to_set;
}
int Charactor::get_blood_upper_limit() {
    return this->blood_upper_limit;
}
void Charactor::set_blood_upper_limit(int blood_upper_limit_to_set) {
    this->blood_upper_limit=blood_upper_limit_to_set;
}
int Charactor::get_current_blood() {
    return this->current_blood;
}
void Charactor::set_current_blood(int current_blood_to_set) {
    this->current_blood=current_blood_to_set;
}
int Charactor::get_strength_power() {
    return this->strength_power;
}
void Charactor::set_strength_power(int strength_power_to_set) {
    this->strength_power=strength_power_to_set;
}
int Charactor::get_magic_power() {
    return this->magic_power;
}
void Charactor::set_magic_power(int magic_power_to_set) {
    this->magic_power=magic_power_to_set;
}
std::string Charactor::get_name() {
    return this->name;
}
void Charactor::set_name(std::string name_to_set) {
    this->name=name_to_set;
}
int Charactor::get_experience_upper_limit() {
    return this->experience_upper_limit;
}
void Charactor::set_experience_upper_limit(int experience_upper_limit_to_set) {
    this->experience_upper_limit=experience_upper_limit_to_set;
}

int Charactor::get_current_experience() {
    return this->current_experience;
}
void Charactor::set_current_experience(int current_experience_to_set) {
    this->current_experience=current_experience_to_set;
}
int Charactor::get_strength_power_upper_limit() {
    return this->strength_power_upper_limit;
}
void Charactor::set_strength_power_upper_limit(int strength_power_upper_limit_to_set) {
    this->strength_power_upper_limit=strength_power_upper_limit_to_set;
}
int Charactor::get_magic_power_upper_limit() {
    return this->magic_power_upper_limit;
}
void Charactor::set_magic_power_upper_limit(int magic_power_upper_limit_to_set) {
    this->magic_power_upper_limit=magic_power_upper_limit_to_set;
}
int Charactor::get_attack_power() {
    return this->attack_power;
}
void Charactor::set_attack_power(int attack_power_to_set) {
    this->attack_power=attack_power_to_set;
}

double Charactor::get_defend_power() {
    return this->defend_power;
}

void Charactor::set_defend_power(double defend_power_to_set) {
    this->defend_power=defend_power_to_set;
}

Weapon Charactor::get_character_weapon() {
    return this->character_weapon;
}
void Charactor::set_character_weapon(Weapon character_weapon_to_set) {
    this->character_weapon=character_weapon_to_set;
}
Armour Charactor::get_character_armour() {
    return this->character_armour;
}

void Charactor::set_character_armour(Armour character_armour_to_set) {
    this->character_armour=character_armour_to_set;
}

Accessory Charactor::get_character_accessory() {
    return this->character_accessory;
}

void Charactor::set_character_accessory(Accessory character_accessory_to_set) {
    this->character_accessory=character_accessory_to_set;
}

Bag Charactor::get_character_bag() {
    return this->character_bag;
}

void Charactor::set_character_bag(Bag character_bag_to_set) {
    this->character_bag=character_bag_to_set;
}

//经验方法
//添加经验,更新等级方法
void Charactor::add_experience_and_update_level(int experience_to_add) {
    //先把经验加到经验槽中
    this->current_experience+=experience_to_add;
    //如果槽满,等级加1,槽扩大,经验清零,直到升到经验小于槽
    while (this->current_experience>this->experience_upper_limit)
    {
        int additional_experience=current_experience-experience_upper_limit;
        this->level+=1;
        this->experience_upper_limit=this->level*10;
        this->blood_upper_limit=this->level*10;
        this->strength_power_upper_limit=this->level*10;
        this->magic_power_upper_limit=this->level*10;
        this->attack_power+=level;
        this->defend_power+=0.02;
        this->current_experience=additional_experience;
    }
}