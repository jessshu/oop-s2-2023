#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include "GameEntity.h"
#include <tuple>

class Ship : public GameEntity
{
private:
    
public:
    Ship(int x, int y) { 
        GameEntity ship(x,y,'S');
     };

    void move(int dx, int dy) {
        std::tuple<int,int> newPos; 
        int new_x = std::get<0>(position) + dx;
        int new_y = std::get<1>(position) + dy;

        newPos = std::make_tuple(new_x, new_y);
        
        return; 
    }

    ~Ship();
};

#endif 

