#pragma once
#include <iostream>
#include "playerstats.hpp"
#include "enemystats.hpp"

class Combat
{
private:
   
public:
   void Combat::Fight();
};

void Combat::Fight()
{

    playerstats playstat;
    enemystats enemystat;

    playstat.Player();

    enemystat.Goblin();

    while(playstat.player_hp > 0 && enemystat.enemy_hp > 0)
    {
        std::cout << playstat.player_hp;
    }

}
