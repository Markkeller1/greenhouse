#include "imgui.h" // necessary for ImGui::*, imgui-SFML.h doesn't include imgui.h

#include "imgui-SFML.h" // for ImGui::SFML::* functions and SFML-specific overloads
#include <iostream>

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "Plant_stats.hpp"




int main() {
    
    Plant_stats Plant;
    sf::RenderWindow window(sf::VideoMode(800, 400), "Greenhouse control", sf::Style::Titlebar | sf::Style::Close);

    
    
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);

    static bool tomatotown = false;
    static bool checkbox1 = false;
    static bool checkbox2 = false;
    int condition = 0;

    static float value1 = 3;
    static float value2 = 22;

    sf::Texture texture;

    if (!texture.loadFromFile("res/smovs.jpg"))
    {
        std::cout << "Load Failed \n";
        system("pause");
    }
    
    sf::Sprite sprite;
    sprite.setTexture(texture);
    

    


    // sf::CircleShape shape(40.f);
    // shape.setFillColor(sf::Color::Green);

    // shape.setTexture(&texture);
    
    sf::Clock deltaClock;
    while (window.isOpen()) {


        sf::Event event;


        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(event);

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        // ImGui::ShowDemoWindow();

        ImGui::Begin("Greenhouse settings");
    
        if (ImGui::Button("Greenhouse presets  "))
        {
            bool setting_chosen = 1;
            if (setting_chosen == 1)
            {
             ImGui::OpenPopup("Greenhouse presets");


            }
        }
        

        
        
        if (ImGui::BeginPopupModal("Greenhouse presets"))
        {
                if (ImGui::Button("Tomato     "))
                {
                    std::cout << std::endl << "Tomato preset selected." << std::endl;
                    Plant.GetPlant1();
                    Plant.Print();
                    ImGui::CloseCurrentPopup();
                }
                
                if (ImGui::Button("Mint       "))
                {
                    std::cout << std::endl << "Mint preset selected" << std::endl;
                    Plant.GetPlant2();
                    Plant.Print();
                    ImGui::CloseCurrentPopup();
                }
                if (ImGui::Button("Micro green"))
                {
                    std::cout << std::endl << "Micro green preset selected" << std::endl;
                    Plant.GetPlant3();
                    Plant.Print();
                    ImGui::CloseCurrentPopup();
                }
                if (ImGui::Button("???        "))
                {
                    std::cout << std::endl;
                    Plant.GetPlant4();
                    Plant.Print();
                    ImGui::CloseCurrentPopup();
                }
                if (ImGui::Button("close      "))
                {
                    ImGui::CloseCurrentPopup();
                }
            ImGui::EndPopup();
        }

        
        
        if (ImGui::Button("Current settings    "))
        {
            bool show_parameters = 1;
            if (show_parameters == 1)
            {
                ImGui::OpenPopup("settings");
            }
            
        }
        if (ImGui::BeginPopupModal("settings"))
        {
        ImGui::Text("light level:           %.2f ",Plant.ReturnLight());
        ImGui::Text("temperature:           %.2f ",Plant.ReturnTemperature());
        ImGui::Text("vapor level:           %.2f ",Plant.ReturnVapor());
        ImGui::Text("carbon level:          %.2f ",Plant.ReturnCarbon());    
        ImGui::Text("water phd level:       %.2f ",Plant.ReturnWater_PHD());
        ImGui::Text("water nutrition level: %.2f ",Plant.ReturnWater_nut());
        ImGui::Text("power:                 %.2f ",Plant.ReturnPower());
        
            
            if (ImGui::Button("close"))
            {
                ImGui::CloseCurrentPopup();
                
            }
            ImGui::EndPopup();
        }
        
        if (ImGui::Button("Custom paramaters   "))
        {
            bool set_custom_parameters = 1;
            if (set_custom_parameters == 1)
            {
                ImGui::OpenPopup("Custom Parameters");
            }
            
        }
        if (ImGui::BeginPopupModal("Custom Parameters"))
        {
                //Indsæt funktioner der ænderer værdierne i vores class

            static float f1 = Plant.ReturnLight();
            ImGui::SliderFloat("1" , &f1 , 0.0f, 210.0f, "Light level = %.3f");

            static float f2 = Plant.ReturnTemperature();
            ImGui::SliderFloat("2", &f2 , 0.0f, 210.0f, "Temperature = %.3f");

            static float f3 = Plant.ReturnVapor();
            ImGui::SliderFloat("3", &f3 , 0.0f, 210.0f, "Vapor level = %.3f");

            static float f4 = Plant.ReturnCarbon();
            ImGui::SliderFloat("4", &f4 , 0.0f, 210.0f, "Carbon level = %.3f");

            static float f5 = Plant.ReturnWater_PHD();
            ImGui::SliderFloat("5", &f5 , 0.0f, 210.0f, "Water PHD Level = %.3f");

            static float f6 = Plant.ReturnWater_nut();
            ImGui::SliderFloat("6", &f6 , 0.0f, 210.0f, "Water nutrient level = %.3f");

            static float f7 = Plant.ReturnPower();
            ImGui::SliderFloat("7", &f7 , 0.0f, 210.0f, "Power = %.3f");

            
            if (ImGui::Button("done"))
            {
                Plant.CustomParametersSettings(f1,f2,f3,f4,f5,f6,f7);
                ImGui::CloseCurrentPopup();
                
            }
            ImGui::EndPopup();
        }
        
        // ImGui::InputText("string", buf, IM_ARRAYSIZE(buf));
        // ImGui::SliderFloat("float", &f, 0.0f, 1.0f);
        
        // ImGui::End();
        // ImGui::Begin("Parameters");
        
        // ImGui::Text("The light level : %.2f ",Plant.ReturnLight());
         // ImGui::Text("The temperature : %.2f ",Plant.ReturnTemperature());
         // ImGui::Text("The vapor level : %.2f ",Plant.ReturnVapor());
         // ImGui::Text("The carbon level : %.2f ",Plant.ReturnCarbon());    
         // ImGui::Text("The water phd level : %.2f ",Plant.ReturnWater_PHD());
         // ImGui::Text("The water nutrition level : %.2f ",Plant.ReturnWater_nut());
         // ImGui::Text("The power level : %.2f ",Plant.ReturnPower());
        
        
        

        
        ImGui::End();

       
        

        
        

        window.clear(sf::Color(0,0,0));
        
        
        // window.draw(shape);
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();

    return 0;
}