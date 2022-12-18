#include <iostream>
#include "Human.h"
#include "Fight.h"
#include "Fight_engine.h"
int main() {
    Charactor charactor1;
    charactor1.set_strength_power(10);
    Fight fight;
    std::cout<<fight.judge_if_can_use_skill(0,charactor1)<<std::endl;

}
