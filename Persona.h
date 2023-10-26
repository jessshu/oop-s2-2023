#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <tuple>

#include "Spot.h"
#include "Snare.h"

class Persona : public Spot
{
private:
    /* data */
public:
    Persona() {};

    Persona(int x, int y) : Spot(x,y,'P') {};

    void shift(int dx, int dy) {
        int new_x = std::get<0>(location) + dx;
        int new_y = std::get<1>(location) + dy;

        std::tuple<int,int> newLoc(new_x,new_y);

        location = newLoc; 
    };

    ~Persona() {};
};

#endif 

