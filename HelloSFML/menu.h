#pragma once
#include<SFML\Graphics.hpp>
#include<iostream>

using namespace std;
using namespace sf;


class menu
{
public:
	Text mainmenu[3];
	menu(float width, float height);
	void draw(RenderWindow& window);
	void MoveUp();
	void MoveDown();
	void setselected(int n);
	int pressed() {
		return selected;
	}
	~menu();
private:
	int selected;
	Font font;
};

