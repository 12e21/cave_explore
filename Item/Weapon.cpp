

#include "Weapon.h"
Weapon::Weapon() {
    this->item_name="空手";
    this->add_attack_power=0;
}
Weapon::Weapon(int weapon_level) {
    switch (weapon_level) {
        case 0:
            this->item_name="空手";
            this->add_attack_power=0;
            break;
        case 1:
            this->item_name="木刀";
            this->add_attack_power=5;
            break;
        case 2:
            this->item_name="铁刀";
            this->add_attack_power=12;
            break;
        case 3:
            this->item_name="钢刀";
            this->add_attack_power=20;
            break;
    }
}
Weapon::~Weapon()=default;