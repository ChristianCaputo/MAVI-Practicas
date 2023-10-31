/*#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Texture texture;
Sprite sprite1;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;

int main()
{
	texture.loadFromFile("rcircle.png");

	sprite1.setTexture(texture);
	sprite2.setTexture(texture);
	sprite2.setPosition(672, 0);
	sprite3.setTexture(texture);
	sprite3.setPosition(0, 472);
	sprite4.setTexture(texture);
	sprite4.setPosition(672, 472);


	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Sniper");

	while (App.isOpen())
	{
		App.clear();
		App.draw(sprite1);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		App.display();
	}

	return 0;
}*/