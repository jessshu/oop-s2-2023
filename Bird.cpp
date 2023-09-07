#include "Bird.h"
#include "Animal.h"

Bird::Bird(): Animal(0), noOfEggs(0), noOfBabies(0) {}
Bird::Bird(double weight, int noOfEggs) : Animal(weight), noOfEggs(0), noOfBabies(0) {}

void Bird::addEggs(int y) {
    noOfEggs = noOfEggs + y;
}

void Bird::hatchEggs(int x) {
    noOfBabies = noOfBabies + x; 
    noOfEggs = noOfEggs - x;
}

int Bird::get_Food() {
    return currentFood;
}

bool Bird::add_Food() {
    if (noOfBabies > 10) {
        currentFood = currentFood + 5 + (noOfBabies*2) + 10;
        return true;
    } else {
        currentFood = currentFood + 5 + (noOfBabies*2);
        return true;
    }

    return false; 
};