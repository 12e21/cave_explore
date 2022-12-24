
#ifndef CAVE_EXPLORE_FIGHT_ENGINE_H
#define CAVE_EXPLORE_FIGHT_ENGINE_H
#include "Engine.h"
#include "../UI/Fight_UI.h"
class Fight_engine: public Engine {
public:
    //死亡检测方法: who_is_dead为1时character1死,为2时character2死,为0时都死
    void death_detect(Charactor charactor1,Charactor charactor2,
                      int& if_has_dead,int& who_is_dead);
    //两角色战斗方法: 返回赢家,1为player,2为enemy
    int battle_two_characters(Charactor& player,Charactor& enemy);

protected:
    Fight_UI Fight_engine_Fight_UI;
    Fight Fight_engine_Fight;
    Fight_AI Fight_engine_fight_AI;


};


#endif //CAVE_EXPLORE_FIGHT_ENGINE_H
