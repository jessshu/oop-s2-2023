#include "player.h"

#include <iostream>

Player::Player() : name(""), health(100), damage(0){}  // default constructor
Player::Player(std::string name, int health, int damage)  // constructor
    : name(name), health(health), damage(damage){}

// deals damage to opponent based on player's damage points
void Player::attack(Player* opponent, int damage) { opponent->takeDamage(damage); }

// reduces players health by given amount
void Player::takeDamage(int damage) {
  health = health - damage;
  std::cout << name << " takes " << damage
            << " damage. Remaining health: " << health << "\n";
}

// get n set functions
int Player::getHealth() { return health; }

void Player::setHealth(int new_health) { health = new_health; }

std::string Player::getName() { 
    return name; 
}

int Player::getDamage() {
    return damage;
}
