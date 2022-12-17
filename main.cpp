#include <iostream>
#include "Human.h"
#include "Fight.h"
#include "Fight_engine.h"
int main() {
    Charactor charactor1;
    charactor1.set_current_blood(9);
    Fight fight;
    fight.magic_heal_little_heal(charactor1);
    std::cout<<" "<<std::endl;
}
