/*#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Texture puntoRojo;
Texture puntoAzul;

Sprite punto1;
Sprite punto2;
Sprite punto3;
Sprite punto4;
Sprite punto5;

int main()
{
	puntoRojo.loadFromFile("rcircle.png");
	puntoAzul.loadFromFile("bluecircle.png");

	punto1.setTexture(puntoRojo);
	punto2.setTexture(puntoRojo);
	punto3.setTexture(puntoRojo);
	punto4.setTexture(puntoRojo);
	punto5.setTexture(puntoAzul);

	punto2.setPosition(675, 0);
	punto3.setPosition(0, 475);
	punto4.setPosition(675, 475);
	punto5.setOrigin(64, 64);
	punto5.setPosition(400, 300);

	sf::RenderWindow App(sf::VideoMode(800, 600), "Transparencias");

	while (App.isOpen())
	{
		App.clear();

		App.draw(punto1);
		App.draw(punto2);
		App.draw(punto3);
		App.draw(punto4);
		App.draw(punto5);

		App.display();

	}

	return 0;
}*/