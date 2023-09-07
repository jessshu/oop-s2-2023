#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"

class Bird : public Animal
{
protected:
    int noOfEggs;
    int noOfBabies; //init 0

public:
    Bird(double weight, int noOfEggs);
    Bird();

    void addEggs(int y);

    void hatchEggs(int x); // hatch x eggs so increase # babies by x, decrease eggs by x

    bool add_Food(); // add 5 and 2 more for every baby, if # babies > 10
                    // add extra 10

    int get_Food();

};

#endif