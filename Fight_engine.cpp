
#include "Fight_engine.h"

void Fight_engine::death_detect(Charactor charactor1, Charactor charactor2,
                                int &if_has_dead, int &who_is_dead) {
    if_has_dead=0;
    who_is_dead=0;
    if(charactor1.get_current_blood()<=0)
    {
        if_has_dead=1;
        who_is_dead=1;
    }
    if(charactor2.get_current_blood()<=0)
    {
        if_has_dead=1;
        who_is_dead=2;
    }
    if((charactor1.get_current_blood()<=0)&&(charactor2.get_current_blood()<=0))
    {
        who_is_dead=0;
    }
}