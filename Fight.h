
#ifndef CAVE_EXPLORE_FIGHT_H
#define CAVE_EXPLORE_FIGHT_H
#include "Action.h"
#include "Human.h"

class Fight:public Action{
public:
    Fight();
    ~Fight();
    void strength_attack_bare_hit(Charactor& caller ,Charactor& passer);
private:
};


#endif //CAVE_EXPLORE_FIGHT_H
