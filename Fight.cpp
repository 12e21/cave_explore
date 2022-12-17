
#include "Fight.h"
Fight::Fight(){
    this->magic_power_costs.assign({0,2});
    this->strength_power_costs.assign({2,0});
};
Fight::~Fight()=default;
//技能编号1 空手攻击(介绍:发动者体力值减2,被击者血量减2)
void Fight::strength_attack_bare_hit(Charactor& caller, Charactor& passer) {
    //被击者血量减2
    passer.set_current_blood(passer.get_current_blood()-2);
    //发击者体力减2
    caller.set_strength_power(caller.get_strength_power()-1);
}
//技能编号2 小治愈术(介绍:发动者血量加2,魔力减2)
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