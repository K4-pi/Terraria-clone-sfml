#ifndef ENTITY_H_
#define ENTITY_H_

#include "SFML/Graphics/CircleShape.hpp"

#include <string>

class Entity {
    protected:
        std::string e_name;
        float e_health;
        float e_size;
        sf::CircleShape e_body;

    public:
        Entity(std::string e_name, float e_health, float e_size);
        void printInfo() const;
        void init();
        sf::CircleShape getBody();
};

#endif
