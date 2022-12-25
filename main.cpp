#include <iostream>
#include "Charactor/Human.h"
#include "Action/Fight.h"
#include "Engine/Fight_engine.h"
#include "AI/Fight_AI.h"
#include "UI/Fight_UI.h"
#include "Item/Bag.h"
#include "UI/Bag_UI.h"
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

    Weapon weapon1;
    Weapon weapon2;
    Bag bag;
    bag.load_a_weapon_to_bag(weapon1);
    bag.load_a_weapon_to_bag(weapon2);
    bool load_three=bag.load_a_weapon_to_bag(weapon2);
    Bag_UI bagUi;
    bagUi.show_weapons_in_a_bag(bag);
}
