#include <iostream>
#include "Human.h"
#include "Fight.h"
#include "Fight_engine.h"
#include "Fight_AI.h"
#include "Fight_UI.h"
int main() {
    Fight_UI fightUi;
    Charactor charactor;
    charactor.set_name("bob");
    charactor.set_current_blood(5);
    charactor.set_strength_power(1);
    charactor.set_magic_power(1);
    int my_choice=fightUi.get_player_skill_choice(charactor);
    std::cout<<"我的选择: "<<my_choice<<std::endl;
}
