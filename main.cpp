#include <iostream>
#include "Human.h"
#include "Fight.h"
#include "Fight_engine.h"
#include "Fight_AI.h"
#include "Fight_UI.h"
int main() {
    Fight_UI fightUi;
    Charactor charactor;
    charactor.set_name("bob");
    charactor.set_current_blood(5);
    fightUi.show_character_info(charactor);
}
