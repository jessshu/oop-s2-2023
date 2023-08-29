#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include "player.h"

class Warrior : public Player {
    protected:
        std::string weapon;

    public:
        Warrior();
        Warrior(std::string name, int health, int damage, std::string weapon);

        void swingWeapon(Player* opponent);

        std::string getWeapon();
        void setWeapon(std::string new_weapon);

};

#endif
