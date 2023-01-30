
#include "Armour.h"
//析构&构造函数
Armour::Armour() {
    this->item_name="裸体";
    this->add_defend_power=0;
}
Armour::Armour(int armour_level) {
    switch (armour_level) {
        case 0:
            this->item_name="裸体";
            this->add_defend_power=0;
            break;
        case 1:
            this->item_name="藤盔甲";
            this->add_defend_power=0.1;
            break;
        case 2:
            this->item_name="皮盔甲";
            this->add_defend_power=0.2;
            break;
        case 3:
            this->item_name="铁盔甲";
            this->add_defend_power=0.4;
            break;
    }

}
Armour::~Armour() =default;
//属性
double Armour::get_add_defend_power() {
    return this->add_defend_power;
}
void Armour::set_add_defend_power(int add_defend_power_to_set) {
    this->add_defend_power=add_defend_power_to_set;
}