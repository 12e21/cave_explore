
#include "Bag_UI.h"
Bag_UI::Bag_UI()=default;
Bag_UI::~Bag_UI()=default;

void Bag_UI::show_weapons_in_a_bag(Bag bag_to_show) {
    std::cout<<"正在显示背包中的武器"<<std::endl;
    //显示背包武器容量
    std::cout<<"容量: "<<bag_to_show.get_weapon_current_count()
    <<"/"<<bag_to_show.get_weapon_contain_count()<<std::endl;
    if(bag_to_show.get_weapon_current_count()==0)
    {
        std::cout<<std::endl;
    } else
    {
        int counter=0;
        for(auto val=bag_to_show.weapons.begin();val<bag_to_show.weapons.begin()+bag_to_show.get_weapon_current_count();val++)
        {
            std::cout<<counter<<". "<<(*val).get_item_name()<<std::endl;
            counter++;
        }
    }
}