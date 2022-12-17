//
// Created by www on 22-12-17.
//

#ifndef CAVE_EXPLORE_CHARACTOR_H
#define CAVE_EXPLORE_CHARACTOR_H


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

private:
    //角色等级设定
    int level;
    //角色血量上限
    int blood_upper_limit;
    //角色的当前血量
    int current_blood;
};


#endif //CAVE_EXPLORE_CHARACTOR_H
