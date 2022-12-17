#include <iostream>
#include "Human.h"
#include "Fight.h"
#include "Fight_engine.h"
int main() {
    int if_has_dead;
    int who_is_dead;
    Charactor charactor1;
    Charactor charactor2;
    //charactor1.set_current_blood(0);
    //charactor2.set_current_blood(0);
    Fight_engine fightEngine;
    fightEngine.death_detect(charactor1,charactor2,if_has_dead,who_is_dead);
    std::cout<<if_has_dead<<":"<<who_is_dead<<std::endl;
}
