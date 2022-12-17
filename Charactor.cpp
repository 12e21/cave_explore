
#include "Charactor.h"
//初始化
Charactor::Charactor() {
    this->level=1;
    this->blood_upper_limit=10;
    this->current_blood=10;
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
