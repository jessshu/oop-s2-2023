#ifndef INFLUENCE_H
#define INFLUENCE_H

#include <iostream>
#include <tuple>

#include "Spot.h"

class Influence
{
private:
    /* data */
public:
    Influence() {}; 

    virtual void implement(Spot& spot);

    ~Influence() {};
};



#endif
