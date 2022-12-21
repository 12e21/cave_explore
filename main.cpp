#include <iostream>
#include "Human.h"
#include "Fight.h"
#include "Fight_engine.h"
#include "Fight_AI.h"
#include "Fight_UI.h"
int main() {
    //战斗例程
    Fight_engine fightEngine;
    Charactor player;
    Charactor enemy;
    player.add_experience_and_update_level(15);
    player.set_name("player");
    enemy.set_name("enemy");
    fightEngine.battle_two_characters(player,enemy);

    //升级例程
    /*Charactor dragonBorn;
    dragonBorn.add_experience_and_update_level(100);*/

}
