
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

//转换
//根据技能id发动技能
void Fight::call_skill_according_id(Charactor& caller, Charactor& passer, int skill_id) {
    switch (skill_id) {
        case 0:
            this->strength_attack_bare_hit(caller,passer);
            break;
        case 1:
            this->magic_heal_little_heal(caller);
            break;
        case 2:
            this->wait();
            break;
    }
}
//技能id转技能名
std::string Fight::skill_id_to_name(int skill_id) {
    switch (skill_id) {
        case 0:
            return "空手击打";
        case 1:
            return "小治愈术";
        case 2:
            return "等待";
    }
    return "空技能";
}