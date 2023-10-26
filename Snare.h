#ifndef SNARE_H
#define SNARE_H

#include <iostream>
#include <tuple>

#include "Spot.h"
#include "Influence.h"

class Snare : public Spot, public Influence
{
private:
    bool operative; 
public:
    Snare() {};

    Snare(int x, int y) : Spot(x,y,'S')  {};

    bool isOperative() {
        return operative; 
    };

    void implement(Spot &spot) {
        spot.setCategory('S');

        operative = false; 
    }
    ~Snare() {};
};



#endif 
