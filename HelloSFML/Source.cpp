#include<iostream>
#include<SFML/Graphics.hpp>
#include"menu.h"


using namespace std;
using namespace sf;
int pagenum = 1000;
/****************************
 * 1000     *   mainmenu    *       
 *  -1      *    exit       *   
 *   1      *    play       *   
 *   2      *   options     *       
 *          *               *
 *          *               * 
 *          *               * 
 *          *               *
 *          *               *
 ****************************/
int main()
{
    RenderWindow window(VideoMode(1920, 1080), "YaaReey");
    menu menu(1920, 1080);
   //background
    Texture background;
    background.loadFromFile("BG.jpg");
    Sprite bg;
    bg.setTexture(background);
   bg.setPosition(270, 125);
   //icon
   Texture icon;
    icon.loadFromFile("icon.png");
    Sprite ic;
    ic.setTexture(icon);
    ic.setPosition(520, 180);



    while (true) {
        if (pagenum == 1000) {
            while (window.isOpen()) {

                Event event;
                while (window.pollEvent(event))
                {

                    if (event.type == Event::Closed) {
                        window.close();
                        break;
                    }
                    if (event.type == Event::KeyPressed) {
                        if (event.key.code == Keyboard::Up) {
                            menu.MoveUp();
                        }
                        if (event.key.code == Keyboard::Down) {
                            menu.MoveDown();
                        }
                    }

                }
                window.clear();
                window.draw(bg);
                window.draw(ic);
                menu.draw(window);
                window.display();



            }

       }
    }

    return 0;
}
