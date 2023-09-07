#include "Animal.h"

Animal::Animal(): weight(0){}
Animal::Animal(double weight) : weight(weight), maxFood(weight*20), currentFood(0) {}

double Animal::get_weight() {
    return weight; 
}

bool Animal::add_Food() {
    return false; 
};
