
#include "Charactor.h"
//初始化
Charactor::Charactor() {
    this->level=1;
    this->blood_upper_limit=10;
    this->current_blood=10;
    this->magic_power=10;
    this->strength_power=10;
    this->name="initial_name";
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