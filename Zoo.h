#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"

class Zoo
{
private:
    int numSpots;
    Animal** animals; 
    int curr_animals; 
public:
    Zoo(int numSpots);
    Zoo();

    Animal** getAnimals();

    ~Zoo();
};

#endif