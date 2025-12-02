#include "SFML/Graphics/Color.hpp"
#include "SFML/Window/Keyboard.hpp"
#include <SFML/Graphics.hpp>
#include "entity.h"
#include "player.h"

int main() {
    sf::RenderWindow window(sf::VideoMode({1920, 1080}), "SFML 3 Window");

    Entity entity("entity", 100.0f, 20.0f);
    entity.printInfo();

    Player player("Player class", 200.0f, 20.0f);
    player.printInfo();

    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(sf::Color::Black);

        player.Move();

        window.draw(entity.getBody());
        window.draw(player.getBody());

        window.display();
    }
}

