

#include "Item.h"
Item::Item() {
    this->item_name="initial_item_name";
}
Item::~Item()=default;

std::string Item::get_item_name() {
    return this->item_name;
}

void Item::set_item_name(std::string item_name_to_set) {
    this->item_name=item_name_to_set;
}