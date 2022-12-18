
#include "Fight_UI.h"

void Fight_UI::show_character_info(Charactor charactor) {
    std::cout<<"正在显示角色信息"<<std::endl;
    std::cout<<"角色名:"<<charactor.get_name()<<std::endl;
    std::cout<<"血量:"<<charactor.get_current_blood()<<"/"<<charactor.get_blood_upper_limit()<<std::endl;
    std::cout<<"体力:"<<charactor.get_strength_power()<<std::endl;
    std::cout<<"魔力:"<<charactor.get_magic_power()<<std::endl;
}

int Fight_UI::get_player_skill_choice(Charactor charactor) {
    int player_choice=0;
    std::cout<<"正在获取用户输入技能"<<std::endl;
    std::cout<<"请选择,可选择的技能如下:"<<std::endl;
    std::cout<<"技能           输入"<<std::endl;
    std::cout<<"空手击打         0 "<<std::endl;
    std::cout<<"小治愈术         1 "<<std::endl;
    std::cout<<"等待             2 "<<std::endl;
    std::cout<<"\n"<<std::endl;
    do {
        std::cout << "请输入你选择的符合条件的技能:" << std::endl;
        std::cin>>player_choice;
    } while (this->Fight_UI_Fight.judge_if_can_use_skill(player_choice, charactor)!= true);
    return player_choice;
}

void Fight_UI::battle_start(Charactor charactor1, Charactor charactor2) {
    std::cout<<"战斗双方:"<<charactor1.get_name()<<"("<<charactor1.get_level()<<")";
    std::cout<<" VS ";
    std::cout<<charactor2.get_name()<<"("<<charactor2.get_level()<<")"<<std::endl;
    std::cout<<"战斗开始:"<<std::endl;
}

void Fight_UI::battle_over(Charactor winner, Charactor loser) {
    std::cout<<"战斗结束"<<std::endl;
    std::cout<<"胜者是: "<<winner.get_name()<<std::endl;
    std::cout<<"败者是: "<<loser.get_name()<<std::endl;
}