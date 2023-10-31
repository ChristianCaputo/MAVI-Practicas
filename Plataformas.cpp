/*#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Texture texture;
Sprite sprites[8];

//float scaleX;
float scaleY = 0.3;
float posX;
float posY = 600;
//float posY2;

int main()
{
	texture.loadFromFile("plataforma.jpg");
	for (int i = 0; i < 8; i++)
	{
		sprites[i].setTexture(texture);
		if (i == 7)
		{
			sprites[i].setScale(1.2, 0.15);
			sprites[i].setPosition(500, 300);
			break;
		}
		sprites[i].setScale(0.15, scaleY);
		sprites[i].setPosition(posX, posY);
		posX += 71;
		posY -= 50;
		scaleY += 0.3;

	}
	
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Plataformas");

	while (App.isOpen())
	{
		App.clear();

		for (int i = 0; i < 8; i++)
		{
			App.draw(sprites[i]);
		}

		App.display();
	}

	return 0;
}*/