
#include "UI.h"
#include "../Item/Bag.h"
#ifndef CAVE_EXPLORE_BAG_UI_H
#define CAVE_EXPLORE_BAG_UI_H


class Bag_UI: public UI{
public:
    Bag_UI();
    ~Bag_UI();
    void show_weapons_in_a_bag(Bag bag_to_show);
    void show_armours_in_a_bag(Bag bag_to_show);
    void show_accessorys_in_a_bag(Bag bag_to_show);
    void show_all_in_a_bag(Bag bag_to_show);
protected:
};


#endif //CAVE_EXPLORE_BAG_UI_H
