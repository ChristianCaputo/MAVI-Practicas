/*#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Sprite sprite;
Texture texture;

int main()
{
	texture.loadFromFile("cuad_yellow.png");
	sprite.setTexture(texture);
	sprite.setScale(0.2, 0.2);
	sprite.setOrigin(256, 256);
	sprite.setPosition(400, 300);
	
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Rotacion");

	while (App.isOpen())
	{
		App.clear();
		sprite.rotate(0.1);
		App.draw(sprite);
		App.display();
	}

	return 0;
}*/
