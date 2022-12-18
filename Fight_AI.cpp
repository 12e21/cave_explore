

#include "Fight_AI.h"
//初级战斗AI,血量高时主攻击,血量低时主回血
int Fight_AI::judge_conditions_return_skill_id(Charactor caller) {
    float caller_blood_percent=float(caller.get_current_blood())/float(caller.get_blood_upper_limit());
    if(caller_blood_percent<=0.3)
    {
        if(Fight_AI_fight.judge_if_can_use_skill(1,caller)== true)
        {
            return 1;
        } else if(Fight_AI_fight.judge_if_can_use_skill(0,caller)== true)
        {
            return 0;
        } else
        {
            return 2;
        }
    } else if((caller_blood_percent>0.3)&&(caller_blood_percent<=0.7))
    {
        if(Fight_AI_fight.judge_if_can_use_skill(0,caller)== true)
        {
            return 0;
        } else if(Fight_AI_fight.judge_if_can_use_skill(1,caller)== true)
        {
            return 1;
        } else
        {
            return 2;
        }
    } else
    {
        if(Fight_AI_fight.judge_if_can_use_skill(0,caller)== true)
        {
            return 0;
        } else
        {
            return 2;
        }
    }
}