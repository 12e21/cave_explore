
#include "Fight_engine.h"

void Fight_engine::death_detect(Charactor charactor1, Charactor charactor2,
                                int &if_has_dead, int &who_is_dead) {
    if_has_dead=0;
    who_is_dead=0;
    if(charactor1.get_current_blood()<=0)
    {
        if_has_dead=1;
        who_is_dead=1;
    }
    if(charactor2.get_current_blood()<=0)
    {
        if_has_dead=1;
        who_is_dead=2;
    }
    if((charactor1.get_current_blood()<=0)&&(charactor2.get_current_blood()<=0))
    {
        who_is_dead=0;
    }
}

int Fight_engine::battle_two_characters(Charactor& player, Charactor& enemy) {
    Fight_engine_Fight_UI.battle_start(player,enemy);
    //初始化
    int if_has_dead=0;
    int who_is_dead=3;
    int skill_result_val=0;

    //战斗主体部分
    while(if_has_dead==0)
    {
        //显示双方信息
        Fight_engine_Fight_UI.show_character_info(player);
        Fight_engine_Fight_UI.show_character_info(enemy);

        //玩家部分
        //玩家选择技能
       int player_skill_choice=Fight_engine_Fight_UI.get_player_skill_choice(player);
       //根据选择发动技能
       skill_result_val=Fight_engine_Fight.call_skill_according_id(player,enemy,player_skill_choice);
       //描述技能发动
       Fight_engine_Fight_UI.call_skill_description(player,player_skill_choice,skill_result_val);

       //死亡检测
       this->death_detect(player,enemy,if_has_dead,who_is_dead);
       if(if_has_dead==1)
       {
           break;
       }
       //占位用，等待用户输回车
       char* position_str;
       std::cin.getline(position_str,0);
       //敌人部分
       //敌人AI选择技能
       int enemy_skill_choice=Fight_engine_fight_AI.judge_conditions_return_skill_id(enemy);
       //根据选择发动技能
       skill_result_val=Fight_engine_Fight.call_skill_according_id(enemy,player,enemy_skill_choice);
       //描述技能发动
       Fight_engine_Fight_UI.call_skill_description(enemy,enemy_skill_choice,skill_result_val);

        //死亡检测
        this->death_detect(player,enemy,if_has_dead,who_is_dead);
        if(if_has_dead==1)
        {
            break;
        }
    }
    //战斗结束，进行结算
    if(who_is_dead==1)
    {
        Fight_engine_Fight_UI.battle_over(enemy,player);
        return 2;
    } else
    {
        Fight_engine_Fight_UI.battle_over(player, enemy);
        return 1;
    }
}