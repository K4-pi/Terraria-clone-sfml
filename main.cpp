#include "SFML/Graphics/Color.hpp"
#include "SFML/Window/Keyboard.hpp"
#include <SFML/Graphics.hpp>
#include <print>
#include "include/SFML/System/Clock.hpp"
#include "include/SFML/System/Time.hpp"
#include "player.h"

int main() {
    sf::RenderWindow window(sf::VideoMode({1920, 1080}), "SFML 3 Window");

    Player player("Player", 200.0f, 20.0f, 100.0f);
    player.printInfo();

    sf::Clock clock;

    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(sf::Color::Black);

        sf::Time time = clock.restart();
        float deltaTime = time.asSeconds();

        std::print("Delta time: {}\n", deltaTime);
        player.Move(deltaTime);

        window.draw(player.getBody());

        window.display();
    }
}

