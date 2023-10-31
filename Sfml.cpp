/*#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Texture texture1;
Texture texture2;
Sprite sprite1;
Sprite sprite2;

float escalaX; float escalaY;
float height_mario1, width_mario1;
float height_mario2, width_mario2;

int main()
{
    // cargamos la textura desde los archivos
    texture1.loadFromFile("mario1.png");
    texture2.loadFromFile("mario2.png");
    // alisamos una de las texturas
    texture1.setSmooth(true);

    // asignamos la textura-material al sprite
    sprite1.setTexture(texture1);
    sprite2.setTexture(texture2);

    // movemos el segundo sprite para no tapar al primero
    sprite2.setPosition(350, 0);

    // ajustamos los tamaños de los sprites para unificarlos
    height_mario1 = (float)texture1.getSize().y;
    height_mario2 = (float)texture2.getSize().y;
    width_mario1 = (float)texture1.getSize().x;
    width_mario2 = (float)texture2.getSize().x;

    escalaX = width_mario2 / width_mario1;  // formula para calcular el factor escala (T2/T1)
    escalaY = height_mario2 / height_mario1;

    sprite1.setScale(escalaX, escalaY);

    // creamos la ventana
    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Ventana SFML");

    // loop principal
    while (App.isOpen())
    {
        App.clear();

        App.draw(sprite1);
        App.draw(sprite2);

        App.display();
    }

    return 0;
}
*/