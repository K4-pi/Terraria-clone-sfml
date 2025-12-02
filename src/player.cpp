#include "player.h"
#include "entity.h"
#include "SFML/Window/Keyboard.hpp"

#include <string>

Player::Player(std::string p_name, float p_health, float p_size) 
: Entity(p_name, p_health, p_size) {}

void Player::Move() {
    sf::Vector2 currentPos = e_body.getPosition();

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) currentPos.x -= 0.1f;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) currentPos.x += 0.1f;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) currentPos.y -= 0.1f;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) currentPos.y += 0.1f;

    e_body.setPosition(currentPos);
}