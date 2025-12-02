#include "entity.h"
#include "SFML/Graphics/CircleShape.hpp"

#include <print>

Entity::Entity(std::string e_name, float e_health, float e_size, float e_speed) : 
e_name(e_name), 
e_health(e_health), 
e_size(e_size), 
e_speed(e_speed)
{
    this->e_body.setRadius(e_size);
    this->e_body.setFillColor(sf::Color(100, 250, 100));
}

void Entity::printInfo() const 
{
    std::print("Name: {}\n", e_name);
    std::print("Health: {}\n", e_health);
    std::print("Size: {}\n", e_size);
    std::print("Base speed: {}\n", e_speed);
}

sf::CircleShape Entity::getBody() const 
{
    return this->e_body;
}

float Entity::getSpeed() const 
{
    return e_speed;
}