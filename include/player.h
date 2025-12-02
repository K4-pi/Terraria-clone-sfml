#ifndef PLAYER_H_
#define PLAYER_H_

#include "entity.h"

#include <string>

class Player: public Entity {
    public:
        Player(std::string p_name, float p_health, float p_size);
        void Move();
};

#endif
