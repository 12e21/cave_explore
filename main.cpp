#include <iostream>
#include "Charactor/Human.h"
#include "Action/Fight.h"
#include "Engine/Fight_engine.h"
#include "AI/Fight_AI.h"
#include "UI/Fight_UI.h"
#include "Item/Bag.h"
int main() {
    //战斗例程
    /*Fight_engine fightEngine;
    Charactor player;
    Charactor enemy;
    player.add_experience_and_update_level(0);
    enemy.add_experience_and_update_level(50);
    player.set_name("player");
    enemy.set_name("enemy");
    fightEngine.battle_two_characters(player,enemy);*/

    //升级例程
    /*Charactor dragonBorn;
    dragonBorn.add_experience_and_update_level(100);*/
    Bag bag;
    Weapon weapon1;
    Weapon weapon2;
    Weapon weapon3;
    bag.load_a_weapon_to_bag(weapon1);
    bag.load_a_weapon_to_bag(weapon2);
//    bag.pop_a_weapon(1,weapon3);
    int a=0;
}
