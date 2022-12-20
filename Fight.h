
#ifndef CAVE_EXPLORE_FIGHT_H
#define CAVE_EXPLORE_FIGHT_H
#include "Action.h"
#include "Human.h"
#include <random>
#include <vector>
class Fight:public Action{
public:
    Fight();
    ~Fight();
    std::vector<int> magic_power_costs;
    std::vector<int> strength_power_costs;
    void strength_attack_bare_hit(Charactor& caller ,Charactor& passer);
    void magic_heal_little_heal(Charactor& caller);
    void wait();
    bool judge_if_can_use_skill(int skill_id,Charactor& caller);
    void call_skill_according_id(Charactor& caller,Charactor& passer,int skill_id);
    std::string skill_id_to_name(int skill_id);
    int build_a_random_int(int min,int max);
private:
};


#endif //CAVE_EXPLORE_FIGHT_H
