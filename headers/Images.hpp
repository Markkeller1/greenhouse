#pragma once
#include "imgui.h" // necessary for ImGui::*, imgui-SFML.h doesn't include imgui.h

#include "imgui-SFML.h" // for ImGui::SFML::* functions and SFML-specific overloads
#include <iostream>

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>


class Images
{
private:
    /* data */
public:
    void Images::imagefile();
    int ctype = 1, imagechoice1 = 0, imagechoice2 = 0, imagechoice3 = 0, imagechoice4 = 0, Fusechoice = 0;

};

void Images::imagefile()
{
    switch (imagechoice1)
        {
            case 1:
                //Black Bottom cover
                switch (imagechoice2)
                {
                case 1:
                    //Flat top cover
                    switch (imagechoice3)
                    {
                    case 1:
                        //Black top cover
                        switch (imagechoice4)
                        {
                        case 1:
                            //AAU logo
                            break;
                        case 2:
                            //B226
                            break;
                        case 3:
                            //AAU logo & B226
                            break;
                        case 4:
                            //No engraving
                            if (!texture.loadFromFile("res/BlackBlack.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                                }
                            break;
                        }
                        
                           
                        
                        break;
                    
                    case 2:
                        switch (imagechoice4)
                        {
                        case 1:
                            //AAU logo
                            break;
                        case 2:
                            //B226
                            break;
                        case 3:
                            //AAU logo & B226
                            break;
                        case 4:
                            //No engraving
                            if (!texture.loadFromFile("res/BlackWhite.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                            break;
                        }
                        //White top cover
                        
                        break;
                    
                    case 3:
                        //Blue top cover
                        switch (imagechoice4)
                        {
                        case 1:
                            //AAU logo
                            break;
                        case 2:
                            //B226
                            break;
                        case 3:
                            //AAU logo & B226
                            break;
                        case 4:
                            //No engraving
                            if (!texture.loadFromFile("res/BlackBlue.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                            break;
                        }
                       
                        break;
                    }


                    break;
                
                case 2:
                    //Curved top cover
                        switch (imagechoice3)
                        {
                        case 1:
                            // Pink
                            switch (imagechoice4)
                            {
                            case 1:
                                //AAU logo
                                break;
                            case 2:
                                //B226
                                break;
                            case 3:
                                //AAU logo & B226
                                break;
                            case 4:
                                //No engraving
                                    if (!texture.loadFromFile("res/BlackPink.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                                break;
                            }
                            break;
                        }
                    



                break;
                }



            break;

            case 2:
                //White Bottom cover
                switch (imagechoice2)
                {
                case 1:
                    //Flat top cover
                    switch (imagechoice3)
                    {
                    case 1:
                        //Black top cover
                        switch (imagechoice4)
                        {
                        case 1:
                            //AAU logo
                            break;
                        case 2:
                            //B226
                            break;
                        case 3:
                            //AAU logo & B226
                            break;
                        case 4:
                            //No engraving
                            if (!texture.loadFromFile("res/WhiteBlack.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                            break;
                        }
                        
                        break;
                    
                    case 2:
                        //White top cover
                        switch (imagechoice4)
                        {
                        case 1:
                            //AAU logo
                            break;
                        case 2:
                            //B226
                            break;
                        case 3:
                            //AAU logo & B226
                            break;
                        case 4:
                            //No engraving
                            if (!texture.loadFromFile("res/WhiteWhite.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                            break;
                        }
                        break;
                    
                    case 3:
                        //Blue top cover
                        switch (imagechoice4)
                        {
                        case 1:
                            //AAU logo
                            break;
                        case 2:
                            //B226
                            break;
                        case 3:
                            //AAU logo & B226
                            break;
                        case 4:
                            //No engraving
                            if (!texture.loadFromFile("res/WhiteBlue.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                        break;
                        }
                    }

                    
                    
                    
                    break;
                case 2:
                    //Curved top cover
                    switch (imagechoice3)
                        {
                        case 1:
                            // Pink
                            switch (imagechoice4)
                            {
                            case 1:
                                //AAU logo
                                break;
                            case 2:
                                //B226
                                break;
                            case 3:
                                //AAU logo & B226
                                break;
                            case 4:
                                //No engraving
                                    if (!texture.loadFromFile("res/WhitePink.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                                break;
                            }
                        break;    
                        }
                break;      
                }
            break;

            case 3:
                //Blue Bottom cover
                switch (imagechoice2)
                {
                case 1:
                    //Flat top cover
                switch (imagechoice2)
                {
                case 1:
                    //Flat top cover
                    switch (imagechoice3)
                    {
                    case 1:
                        //Black top cover
                        switch (imagechoice4)
                            {
                            case 1:
                                //AAU logo
                                break;
                            case 2:
                                //B226
                                break;
                            case 3:
                                //AAU logo & B226
                                break;
                            case 4:
                                //No engraving
                                if (!texture.loadFromFile("res/BlueBlack.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                                break;
                            }
                        
                        break;
                    
                    case 2:
                        //White top cover
                        switch (imagechoice4)
                            {
                            case 1:
                                //AAU logo
                                break;
                            case 2:
                                //B226
                                break;
                            case 3:
                                //AAU logo & B226
                                break;
                            case 4:
                                //No engraving
                                if (!texture.loadFromFile("res/BlueWhite.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                                break;
                            }
                        break;
                    
                    case 3:
                        //Blue top cover
                        switch (imagechoice4)
                            {
                            case 1:
                                //AAU logo
                                break;
                            case 2:
                                //B226
                                break;
                            case 3:
                                //AAU logo & B226
                                break;
                            case 4:
                                //No engraving
                                if (!texture.loadFromFile("res/BlueBlue.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                                break;
                            }
                        break;
                
                    
                    }
                case 2:
                    //Curved top cover
                    switch (imagechoice3)
                        {
                        case 1:
                            // Pink
                            switch (imagechoice4)
                            {
                            case 1:
                                //AAU logo
                                break;
                            case 2:
                                //B226
                                break;
                            case 3:
                                //AAU logo & B226
                                break;
                            case 4:
                                //No engraving
                                    if (!texture.loadFromFile("res/BluePink.jpg"))
                            {
                                std::cout << "Load Failed \n";
                                system("pause");
                            }
                                break;
                            }
                            break;
                        }
                    break;

                    
                }
            }
            
        }

    sprite.setTexture(texture);

}


}
