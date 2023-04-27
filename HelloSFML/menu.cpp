#include "menu.h"
#include<iostream>
#include<SFML\Graphics.hpp>

using namespace sf;
using namespace std;



menu::menu(float width, float height) {
	font.loadFromFile("University.otf");

	//watanyyyyyyyyyyyyyyyyyyyy

	mainmenu[0].setFont(font);
	mainmenu[0].setFillColor(Color{ 245,189,2 });
	mainmenu[0].setString("play");
	mainmenu[0].setCharacterSize(60);
	mainmenu[0].setPosition(Vector2f(830,520));




	mainmenu[1].setFont(font);
	mainmenu[1].setFillColor(Color::White);
	mainmenu[1].setString("sound");
	mainmenu[1].setCharacterSize(60);
	mainmenu[1].setPosition(Vector2f(830,620));




	mainmenu[2].setFont(font);
	mainmenu[2].setFillColor(Color::White);
	mainmenu[2].setString("exit");
	mainmenu[2].setCharacterSize(60);
	mainmenu[2].setPosition(Vector2f(830, 720));

	selected = 0;



}
menu::~menu(){}

void menu::setselected(int n) {
	selected = n;
}
void menu::draw(RenderWindow& window) {

	for (int i = 0; i < 3; i++) {
		window.draw(mainmenu[i]);
	}
}

void menu::MoveDown() {
	if (selected + 1 <= 3) //not in exit
	{
		mainmenu[selected].setFillColor(Color::White);
		selected++;
		if (selected == 3) {
			selected = 0;

		}
		mainmenu[selected].setFillColor(Color{ 245,189,2 });

	}
}
	
	void menu::MoveUp()
	{
		if (selected - 1 >= -1)//not in play 
		{
			mainmenu[selected].setFillColor(Color::White);
			selected--;
			if (selected == -1) {
				selected = 2;
			}
			mainmenu[selected].setFillColor(Color{ 245,189,2 });
		}
		



	}

	
