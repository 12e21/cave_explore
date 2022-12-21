
#include "Fight.h"
Fight::Fight(){
    this->magic_power_costs.assign({0,2,0});
    this->strength_power_costs.assign({2,0,0});
};
Fight::~Fight()=default;
//技能编号0 空手攻击(介绍:发动者体力值减1,被击者血量减攻击力到攻击力+3中随机值,返回伤害)
int Fight::strength_attack_bare_hit(Charactor& caller, Charactor& passer) {
    int damage=this->build_a_random_int(caller.get_attack_power(),caller.get_attack_power()+3);
    //被击者血量减1-3随机值
    passer.set_current_blood(passer.get_current_blood()-damage);
    //发击者体力减1
    caller.set_strength_power(caller.get_strength_power()-1);
    //返回伤害值
    return damage;
}
//技能编号1 小治愈术(介绍:发动者血量加1-3之间随机值,魔力减2,返回治愈)
int Fight::magic_heal_little_heal(Charactor &caller) {
    int heal_blood=this->build_a_random_int(1,3);
    //做一次检定,防止加超出总血
    if(caller.get_current_blood()<=caller.get_blood_upper_limit()-heal_blood)
    {
        caller.set_current_blood(caller.get_current_blood()+heal_blood);
    } else
    {
        caller.set_current_blood(caller.get_blood_upper_limit());
    }
    caller.set_magic_power(caller.get_magic_power()-2);
    //返回治愈值
    return heal_blood;
}
//技能编号2 等待(简介: 什么都不干)
int Fight::wait() {
    return 0;
}

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
//根据技能id发动技能,返回技能的结果值
int Fight::call_skill_according_id(Charactor& caller, Charactor& passer, int skill_id) {
    int skill_result_value=0;
    switch (skill_id) {
        case 0:
            skill_result_value=this->strength_attack_bare_hit(caller,passer);
            break;
        case 1:
            skill_result_value=this->magic_heal_little_heal(caller);
            break;
        case 2:
            skill_result_value=this->wait();
            break;
    }
    return skill_result_value;
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


//杂项
//生成指定范围内随机数
int Fight::build_a_random_int(int min, int max) {
    std::random_device seed;//硬件生成随机数种子
    std::ranlux48 engine(seed());//利用种子生成随机数引擎
    std::uniform_int_distribution<> distrib(min,max);//设置随机数范围，并为均匀分布
    return distrib(engine);//随机数
}