/*#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Sprite black;
Sprite red;
Sprite blue;
Sprite yellow;

Texture blackText;
Texture redText;
Texture blueText;
Texture yellowText;

float scaleX;
float scaleY;

int main()
{
	blackText.loadFromFile("chessb.png");
	redText.loadFromFile("cuad_red.png");
	blueText.loadFromFile("cuad_blue.png");
	yellowText.loadFromFile("cuad_yellow.png");

	black.setTexture(blackText);
	red.setTexture(redText);
	blue.setTexture(blueText);
	yellow.setTexture(yellowText);

	black.setScale(0.78125, 0.78125);
	red.setScale(0.390625, 0.390625);
	blue.setScale(0.78125, 0.78125);
	yellow.setScale(0.1953125, 0.1953125);

	red.setPosition(0, 0);
	yellow.setPosition(100, 0);
	blue.setPosition(0, 100);
	black.setPosition(100, 100);

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Cuadrados");

	while(App.isOpen())
	{
		App.clear();

		App.draw(red);
		App.draw(yellow);
		App.draw(blue);
		App.draw(black);

		App.display();
	}

	
	return 0;
}*/