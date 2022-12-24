//
// Created by www on 22-12-17.
//

#ifndef CAVE_EXPLORE_CHARACTOR_H
#define CAVE_EXPLORE_CHARACTOR_H
#include <iostream>
#include "../Item/Bag.h"
class Charactor {
public:
    //构造/析构函数
    Charactor();
    ~Charactor();
    //属性
    int get_level();
    void set_level(int level_to_set);
    int get_blood_upper_limit();
    void set_blood_upper_limit(int blood_upper_limit_to_set);
    int get_current_blood();
    void set_current_blood(int current_blood_to_set);
    int get_magic_power();
    void set_magic_power(int magic_power_to_set);
    int get_strength_power();
    void set_strength_power(int strength_power_to_set);
    std::string get_name();
    void set_name(std::string name_to_set);
    int get_experience_upper_limit();
    void set_experience_upper_limit(int experience_upper_limit_to_set);
    int get_current_experience();
    void set_current_experience(int current_experience_to_set);
    int get_strength_power_upper_limit();
    void set_strength_power_upper_limit(int strength_power_upper_limit_to_set);
    int get_magic_power_upper_limit();
    void set_magic_power_upper_limit(int magic_power_upper_limit_to_set);
    int get_attack_power();
    void set_attack_power(int attack_power_to_set);
    double get_defend_power();
    void set_defend_power(double defend_power_to_set);
    Weapon get_character_weapon();
    void set_character_weapon(Weapon character_weapon_to_set);
    Armour get_character_armour();
    void set_character_armour(Armour character_armour_to_set);
    Accessory get_character_accessory();
    void set_character_accessory(Accessory character_accessory_to_set);
    Bag get_character_bag();
    void set_character_bag(Bag character_bag_to_set);
    //等级相关方法
    //添加经验并更新等级
    void add_experience_and_update_level(int experience_to_add);
private:
    //角色等级设定
    int level;
    //角色血量上限
    int blood_upper_limit;
    //角色的当前血量
    int current_blood;
    //角色魔力
    int magic_power;
    //角色体力值
    int strength_power;
    //角色名
    std::string name;
    //当前等级经验槽上限
    int experience_upper_limit;
    //当前槽内经验
    int current_experience;
    //体力槽
    int strength_power_upper_limit;
    //魔力槽
    int magic_power_upper_limit;
    //攻击力
    int attack_power;
    //防御力
    double defend_power;
    //角色武器
    Weapon character_weapon;
    //角色盔甲
    Armour character_armour;
    //角色饰品
    Accessory character_accessory;
    //角色背包
    Bag character_bag;
};


#endif //CAVE_EXPLORE_CHARACTOR_H
