#include "iostream"
#ifndef CAVE_EXPLORE_ITEM_H
#define CAVE_EXPLORE_ITEM_H


class Item {
public:
    Item();
    ~Item();
    std::string get_item_name();
    void set_item_name(std::string item_name_to_set);

protected:
    std::string item_name;

};


#endif //CAVE_EXPLORE_ITEM_H
