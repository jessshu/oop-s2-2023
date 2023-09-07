#include "Mammal.h"
#include "Animal.h"

#include <iostream>

Mammal::Mammal() : Animal(0),  numBabies(0), spawnSize(0) {};

Mammal::Mammal(double weight, int spawnSize) : Animal(weight),  numBabies(0), spawnSize(spawnSize) {}

void Mammal::give_birth() {
    numBabies = numBabies + spawnSize;
}

bool Mammal::add_Food() {
    int temp_currentFood = currentFood + (30+numBabies*10);

    if (maxFood > temp_currentFood) {
        currentFood = currentFood + (30+numBabies*10);
        return true;
    } else {
        currentFood = maxFood;
        std::cout << "Over fed" << std::endl; 
        return false;
    }
    return false;
}