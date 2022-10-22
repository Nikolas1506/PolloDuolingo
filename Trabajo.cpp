#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 900), "SFML works!");

    sf::CircleShape shape2(200.f);
    shape2.setFillColor(sf::Color::Green);
    shape2.setPosition(sf::Vector2f(50, 160));
    sf::CircleShape pico(75, 3);
    pico.setFillColor(sf::Color(253, 107, 43));
    pico.rotate(180.f);
    pico.setPosition(sf::Vector2f(330, 530));
    sf::CircleShape ojoizq(80.f);
    ojoizq.setFillColor(sf::Color::White);
    ojoizq.setPosition(sf::Vector2f(92, 230));
    sf::CircleShape ojoder(80.f);
    ojoder.setFillColor(sf::Color::White);
    ojoder.setPosition(sf::Vector2f(250, 230));
    sf::CircleShape negroizq(20.f);
    negroizq.setFillColor(sf::Color::Black);
    negroizq.setPosition(sf::Vector2f(190, 265));
    sf::CircleShape negroder(20.f);
    negroder.setFillColor(sf::Color::Black);
    negroder.setPosition(sf::Vector2f(345, 265));
    sf::CircleShape pelo1(25.f);
    pelo1.setScale(2, 1);
    pelo1.setFillColor(sf::Color(231, 187, 51));
    pelo1.rotate(130.f);
    pelo1.setPosition(340, 115);
    sf::CircleShape cuerpo1(220.f);
    cuerpo1.setScale(1.5, 1);
    cuerpo1.rotate(90.f);
    cuerpo1.setFillColor(sf::Color::Green);
    cuerpo1.setPosition(550, 450);
    sf::CircleShape ala1(60.f);
    ala1.setFillColor(sf::Color(231, 187, 51));
    ala1.rotate(81.f);
    ala1.setPosition(463, 575);
    ala1.setScale(2.5, 1);
    sf::CircleShape ala2(60.f);
    ala2.setFillColor(sf::Color(231, 187, 51));
    ala2.rotate(100.f);
    ala2.setPosition(180, 590);
    ala2.setScale(2.5, 1);
    sf::CircleShape pansa(140.f);
    pansa.setFillColor(sf::Color(240, 223, 74));
    pansa.rotate(90.f);
    pansa.setPosition(400, 590);
    pansa.setScale(1.5, 1);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(cuerpo1);
        window.draw(pelo1);
        window.draw(shape2);
        window.draw(pico);
        window.draw(ojoizq);
        window.draw(ojoder);
        window.draw(negroizq);
        window.draw(negroder);
        window.draw(pansa);
        window.draw(ala1);
        window.draw(ala2);

        window.display();
    }
    return 0;
}