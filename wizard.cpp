#include <iostream> 
#include "wizard.h"
#include "player.h"

Wizard::Wizard(std::string name, int health, int damage, int mana): Player(name,health,damage), mana(mana) {}

int Wizard::getMana() {
    return mana;
}

void Wizard::setMana(int new_mana) {
    mana = new_mana;
}

// deals damage based on player's mana points 
void Wizard::castSpell(Player* opponent) {

    opponent->takeDamage(mana);
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}
