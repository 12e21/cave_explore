#include <iostream>
#include "Human.h"
#include "Fight.h"
#include "Fight_engine.h"
#include "Fight_AI.h"
#include "Fight_UI.h"
int main() {
    Fight_engine fightEngine;
    Charactor player;
    Charactor enemy;
    player.set_name("player");
    enemy.set_name("enemy");
    fightEngine.battle_two_characters(player,enemy);


}
