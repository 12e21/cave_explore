
#include "Fight.h"
Fight::Fight()=default;
Fight::~Fight()=default;
void Fight::strength_attack_bare_hit(Charactor& caller, Charactor& passer) {
    //被击者血量减2
    passer.set_current_blood(passer.get_current_blood()-2);
    //发击者体力减2
    caller.set_strength_power(caller.get_strength_power()-1);
}