
#include "Fight_UI.h"

void Fight_UI::show_character_info(Charactor charactor) {
    std::cout<<"正在显示角色信息"<<std::endl;
    std::cout<<"角色名:"<<charactor.get_name()<<std::endl;
    std::cout<<"血量:"<<charactor.get_current_blood()<<"/"<<charactor.get_blood_upper_limit()<<std::endl;
    std::cout<<"体力:"<<charactor.get_strength_power()<<std::endl;
    std::cout<<"魔力:"<<charactor.get_magic_power()<<std::endl;
}