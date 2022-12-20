
#ifndef CAVE_EXPLORE_FIGHT_UI_H
#define CAVE_EXPLORE_FIGHT_UI_H
#include "Human.h"
#include "Fight_AI.h"

class Fight_UI {
public:
    void show_character_info(Charactor charactor);
    int get_player_skill_choice(Charactor charactor);
    void battle_start(Charactor charactor1,Charactor charactor2);
    void battle_over(Charactor winner,Charactor loser);
    void call_skill_description(Charactor caller,int skill_id,int skill_result_val);
private:
    Fight Fight_UI_Fight;
};


#endif //CAVE_EXPLORE_FIGHT_UI_H
