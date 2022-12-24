#include "AI.h"

#ifndef CAVE_EXPLORE_FIGHT_AI_H
#define CAVE_EXPLORE_FIGHT_AI_H


class Fight_AI: public AI{
public:
    int judge_conditions_return_skill_id(Charactor caller);
protected:
    Fight Fight_AI_fight;

};


#endif //CAVE_EXPLORE_FIGHT_AI_H
