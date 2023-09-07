#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
protected:
    double weight;
    int maxFood;
    int currentFood;
    
public:
    Animal();
    Animal(double weight); // max food weight*20, current food 0

    double get_weight();
    virtual bool add_Food();

};

#endif
