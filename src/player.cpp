#include "player.h"
#include "entity.h"
#include "SFML/Window/Keyboard.hpp"

#include <string>

Player::Player(std::string p_name, float p_health, float p_size, float p_speed) 
: Entity(p_name, p_health, p_size, p_speed) {}

void Player::Move(float deltaTime) {
    sf::Vector2 currentPos = e_body.getPosition();

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) currentPos.x -= 1.0f * deltaTime * getSpeed();
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) currentPos.x += 1.0f * deltaTime * getSpeed();
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) currentPos.y -= 1.0f * deltaTime * getSpeed();
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) currentPos.y += 1.0f * deltaTime * getSpeed();

    e_body.setPosition(currentPos);
}