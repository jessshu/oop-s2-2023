#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include "player.h"

class Wizard : public Player {
    private:
        int mana;

    public:
    // constructors 
    Wizard();
    Wizard(std::string name, int health, int damage, int mana);

        // deals damage based on player's mana points 
        void castSpell(Player* opponent);

        int getMana();
        void setMana(int new_mana);
        
};

#endif
