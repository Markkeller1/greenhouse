#pragma once

class enemystats
{
private:
    double enemy_atk = 0;
    double enemy_def = 0;
    
public:
   void enemystats::Goblin();
   double enemy_hp = 0;
};

    void enemystats::Goblin(){

        enemy_atk = 10;
        enemy_def = 10;
        enemy_hp = 100;
        return;
    }