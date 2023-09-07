#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal 
{
protected:
    int numBabies;
    int spawnSize;
public:
    Mammal();
    Mammal(double weight, int spawnSize);

    void give_birth(); // add spawnsize to current number of babies 

    bool add_Food(); // 30  +10 for every additional baby
                    // if over max food print "Over fed" and set current food to max food 


};


#endif
