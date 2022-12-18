
#include "Fight.h"
Fight::Fight(){
    this->magic_power_costs.assign({0,2,0});
    this->strength_power_costs.assign({2,0,0});
};
Fight::~Fight()=default;
//技能编号0 空手攻击(介绍:发动者体力值减2,被击者血量减2)
void Fight::strength_attack_bare_hit(Charactor& caller, Charactor& passer) {
    //被击者血量减2
    passer.set_current_blood(passer.get_current_blood()-2);
    //发击者体力减2
    caller.set_strength_power(caller.get_strength_power()-1);
}
//技能编号1 小治愈术(介绍:发动者血量加2,魔力减2)
void Fight::magic_heal_little_heal(Charactor &caller) {
    //做一次检定,防止加超出总血
    if(caller.get_current_blood()<=caller.get_blood_upper_limit()-2)
    {
        caller.set_current_blood(caller.get_current_blood()+2);
    } else
    {
        caller.set_current_blood(caller.get_blood_upper_limit());
    }
    caller.set_magic_power(caller.get_magic_power()-2);
}
//技能编号2 等待(简介: 什么都不干)
void Fight::wait() {}

//检定
//检定一个角色的体力值和魔力值是否够使用一个技能
bool Fight::judge_if_can_use_skill(int skill_id, Charactor &caller) {
    if((caller.get_strength_power()>=this->strength_power_costs[skill_id])&&(caller.get_magic_power()>=magic_power_costs[skill_id]))
    {
        return true;
    } else
    {
        return false;
    }
}