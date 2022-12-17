#include <iostream>
#include "Human.h"
#include "Fight.h"
int main() {
    Charactor charactor1;
    Charactor charactor2;
    Fight fight;
    for(int i=0;i<3;i++)
    {
        fight.strength_attack_bare_hit(charactor2,charactor1);
    }
    fight.strength_attack_bare_hit(charactor1,charactor2);

}
