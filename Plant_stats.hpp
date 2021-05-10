#pragma once
#include <iostream>
#include <string>

class Plant_stats
{
    
public:
   void GetPlant1();
   void GetPlant2();
   void GetPlant3();
   void GetPlant4();
   void Print();
   
    
private:
    
    std::string Name = "unknown";
    double Temperature = 0;
    double vapor = 0;
    double carbon = 0;
    double Water_PHD = 0;
    double Water_nut = 0;
    double power = 0;
    double Light = 0;

};

void Plant_stats::GetPlant1(){

    Name = "Tomato";
    Light = 1;
    Temperature = 1;
    vapor = 1;
    carbon = 1;
    Water_PHD = 1;
    Water_nut = 1;
    power = 1;

    return;

};

void Plant_stats::GetPlant2()
{
    Name = "Mint";
    Light = 2;
    Temperature = 2;
    vapor = 2;
    carbon = 2;
    Water_PHD = 2;
    Water_nut = 2;
    power = 2;

    return;

};

void Plant_stats::GetPlant3(){

    Name = "micro greens";
    Light = 3;
    Temperature = 3;
    vapor = 3;
    carbon = 3;
    Water_PHD = 3;
    Water_nut = 3;
    power = 3;

    return;
};

void Plant_stats::GetPlant4(){
    
    Name = "dadi whanted 4 options";
    Light = 4;
    Temperature = 4;
    vapor = 4;
    carbon = 4;
    Water_PHD = 4;
    Water_nut = 4;
    power = 4;

    return;
};

void Plant_stats::Print(){
    
    std::cout << Name << std::endl;
    std::cout << Light << std::endl;
    std::cout << Temperature << std::endl;
    std::cout << vapor << std::endl;
    std::cout << carbon << std::endl;
    std::cout << Water_PHD << std::endl;
    std::cout << Water_nut << std::endl;
    std::cout << power << std::endl;

    return;

}