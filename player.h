#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player {
    protected: 
        std::string name;
        int health;
        int damage;

    public: 
        Player(); // default constructor 
        Player(std::string name, int health, int damage);

        // deals damage to opponent based on player's damage points 
        void attack(Player* opponent, int damage);

        // reduces players health by given amount 
        void takeDamage(int damage);

        // get n set functions 
        int getHealth();
        void setHealth(int new_health);
        std::string getName();
        void setName();
        int getDamage();
        void setDamage();

};

#endif
