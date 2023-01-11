
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

void Bag_UI::show_armours_in_a_bag(Bag bag_to_show) {
    std::cout<<"正在显示背包中盔甲"<<std::endl;
    std::cout<<"容量: "<<bag_to_show.get_armour_current_count()<<"/"<<bag_to_show.get_armour_contain_count()<<std::endl;
    if(bag_to_show.get_armour_current_count()==0)
    {
        std::cout<<std::endl;
    } else
    {
        int counter=0;
        for(auto val=bag_to_show.armours.begin();val<bag_to_show.armours.begin()+bag_to_show.get_armour_current_count();val++)
        {
            std::cout<<counter<<". "<<(*val).get_item_name()<<std::endl;
            counter++;
        }
    }
}

void Bag_UI::show_accessorys_in_a_bag(Bag bag_to_show) {
    std::cout<<"正在显示背包中的饰品"<<std::endl;
    std::cout<<"容量: "<<bag_to_show.get_accessory_current_count()<<"/"<<bag_to_show.get_accessory_contain_count()<<std::endl;
    if(bag_to_show.get_accessory_current_count()==0)
    {
        std::cout<<std::endl;
    } else
    {
        int counter=0;
        for(auto val=bag_to_show.accessorys.begin();val<bag_to_show.accessorys.begin()+bag_to_show.get_accessory_current_count();val++)
        {
            std::cout<<counter<<". "<<(*val).get_item_name()<<std::endl;
            counter++;
        }
    }
}

void Bag_UI::show_all_in_a_bag(Bag bag_to_show) {
    this->show_weapons_in_a_bag(bag_to_show);
    this->show_armours_in_a_bag(bag_to_show);
    this->show_accessorys_in_a_bag(bag_to_show);
}