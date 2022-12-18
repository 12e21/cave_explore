#include <iostream>
#include "Human.h"
#include "Fight.h"
#include "Fight_engine.h"
#include "Fight_AI.h"
int main() {
    Charactor charactor1;
    charactor1.set_magic_power(9);
    charactor1.set_strength_power(3);
    charactor1.set_current_blood(7);
    Fight_AI fightAi;
    int skill_id= fightAi.judge_conditions_return_skill_id(charactor1);
    std::cout<<skill_id<<std::endl;



}
