#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Texture textureW;
Texture textureB;

int spritesPos[5][6];
Sprite sprites[5][6];

float xPosition;
float yPosition;

int main()
{
	textureW.loadFromFile("chessw.png");
	textureB.loadFromFile("chessb.png");
	xPosition = 0;
	yPosition = 0;
	int casillero = 0;

	for (int i = 0; i < 5; i++)	// matriz de posiciones de tablero
	{
		for (int j = 0; j < 6; j++)
		{
			spritesPos[i][j] = casillero;
			casillero ++;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		
		if ( i % 2 == 0)
		{
			xPosition = 0;
		}
		else if ( i % 2 != 0)
		{
			xPosition = 128;
		}
		
		for (int j = 0; j < 6; j++)		// asignacion de textura y posicion de cada elemento del tablero
		{
			sprites[i][j].setScale(1.1, 1.0);

			if (spritesPos[i][j] % 2 == 0)
			{
				sprites[i][j].setTexture(textureW);
				sprites[i][j].setPosition(xPosition, yPosition);
				xPosition += 128;
			}
			else
			{
				sprites[i][j].setTexture(textureB);
				sprites[i][j].setPosition(xPosition, yPosition);
				xPosition += 128;
			}
		}
		yPosition += 128;
	}

	sf::RenderWindow App(sf::VideoMode(800, 600), "Ajedrez");

	while (App.isOpen())
	{
		App.clear();

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				App.draw(sprites[i][j]);
			}
		}

		App.display();

		Event evt;
		while (App.pollEvent(evt))
		{
			switch (evt.type)
			{
				case sf::Event::Closed:
					App.close();
					break;

				/*case sf::Event::KeyPressed:	// modo buffered de detección del input
					if ((evt.key.code) == sf::Keyboard::Escape)
					{
						App.close();
						break;
					}*/
			}
			if (Keyboard::isKeyPressed(Keyboard::Escape) == true) // modo unbuffered, chequea en todo 
			{													  // momento si se presionó la tecla
				App.close();
			}
		}
	}

	return 0;
}