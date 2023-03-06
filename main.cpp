#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Prototyping");
    sf::CircleShape shape(100.f);
    float sh[2] = {59,39};
    shape.setPosition(sh[0],sh[1]);
    shape.setFillColor(sf::Color::Green);
    shape.setOrigin(100,100);
    while (window.isOpen())
    {
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
        int xx = sf::Mouse::getPosition(window).x;
        int yy = sf::Mouse::getPosition(window).y;
        sh[0]=sh[0]+.1;
        shape.setPosition(xx,yy);
    }

    return 0;
}