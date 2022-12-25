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

    Armour armour1;
    Armour armour2;
    Bag_UI bagUi;
    Bag bag;
    bag.load_a_armour_to_bag(armour1);
    bool bag_two=bag.load_a_armour_to_bag(armour2);
    bagUi.show_armours_in_a_bag(bag);

}
