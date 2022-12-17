
#ifndef CAVE_EXPLORE_FIGHT_ENGINE_H
#define CAVE_EXPLORE_FIGHT_ENGINE_H
#include "Engine.h"
class Fight_engine:Engine {
public:
    //死亡检测方法: who_is_dead为1时character1死,为2时character2死,为0时都死
    void death_detect(Charactor charactor1,Charactor charactor2,
                      int& if_has_dead,int& who_is_dead);
private:


};


#endif //CAVE_EXPLORE_FIGHT_ENGINE_H
