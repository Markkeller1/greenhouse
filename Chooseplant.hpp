#pragma once
#include <iostream>
#include "Plant_stats.hpp"

class Chooseplant
{
    private:
    int choice = 0;
    public:
   void Chooseplant::Choose();
};

void Chooseplant::Choose()
{
    Plant_stats Plantstats;

    std::cout << "Please choose plant" << std::endl << "1 = Tomato" << std::endl << "2 = mint" << std::endl << "3 = micro greens" << std::endl << "4 = ???";
    
    std::cin >> choice;

    switch (choice)
    {
        case 1:
            Plantstats.GetPlant1();
        break;
            
        case 2:
            Plantstats.GetPlant2();
        break;

        case 3:
            Plantstats.GetPlant3();
        break;

        case 4:
            Plantstats.GetPlant4();
        break;    

    };
    Plantstats.Print();

    return;
};