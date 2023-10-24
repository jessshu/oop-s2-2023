#ifndef EFFECT_H
#define EFFECT_H

#include <iostream>
#include <tuple>
#include "GameEntity.h"

class Effect
{
private:
    
public:
    virtual void apply (GameEntity& entity) =0; // pure virtual, needs to be implemented in other classes 
    ~Effect(); 

};



#endif
