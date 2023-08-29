#include <iostream>
#include "warrior.h"
#include "player.h"


Warrior::Warrior(std::string name, int health, int damage, std::string weapon) : Player(name,health,damage) {
    weapon=weapon;
}

void Warrior::swingWeapon(Player* opponent) {
    opponent->takeDamage(damage);
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}

std::string Warrior::getWeapon() {
    return weapon;
}

void Warrior::setWeapon(std::string new_weapon) {
    weapon = new_weapon;
}
