#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Zoo.h"

Zoo::Zoo() : numSpots(0), curr_animals(0) {}

Zoo::Zoo(int numSpots) : numSpots(numSpots), curr_animals(0) {
    animals = new Animal*[numSpots];
}

Animal** Zoo::getAnimals() {
    for (int i = 0; i < curr_animals; i++) {
        
    }
}

Zoo::~Zoo() {
    delete[] animals; 
}