//
// Created by www on 22-12-17.
//

#ifndef CAVE_EXPLORE_CHARACTOR_H
#define CAVE_EXPLORE_CHARACTOR_H
#include <iostream>

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

private:
    //角色等级设定
    int level;
    //角色血量上限
    int blood_upper_limit;
    //角色的当前血量
    int current_blood;
    int magic_power;
    int strength_power;
    std::string name;
};


#endif //CAVE_EXPLORE_CHARACTOR_H
