#ifndef ENTITY_H_
#define ENTITY_H_

#include "SFML/Graphics/CircleShape.hpp"

#include <string>

class Entity 
{
    protected:
        std::string e_name;
        sf::CircleShape e_body;
        float e_health;
        float e_size;
        float e_speed;

    public:
        Entity(std::string e_name, float e_health, float e_size, float e_speed);
        sf::CircleShape getBody() const;
        void printInfo() const;
        float getSpeed() const;
};

#endif
