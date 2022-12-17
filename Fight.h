
#ifndef CAVE_EXPLORE_FIGHT_H
#define CAVE_EXPLORE_FIGHT_H
#include "Action.h"
#include "Human.h"
#include <vector>
class Fight:public Action{
public:
    Fight();
    ~Fight();
    std::vector<int> magic_power_costs;
    std::vector<int> strength_power_costs;
    void strength_attack_bare_hit(Charactor& caller ,Charactor& passer);
    void magic_heal_little_heal(Charactor& caller);
private:
};


#endif //CAVE_EXPLORE_FIGHT_H
