#ifndef MINE_H
#define MINE_H

#include "Explosion.h"
#include "GameEntity.h"
#include <iostream>
#include <tuple>

class Mine : public GameEntity
{
private:
    
public:
    Mine(int x, int y) {
        GameEntity(x,y,'M');
    };

    Explosion explode() {

        int x_pos = std::get<0>(position);
        int y_pos = std::get<1>(position);

        Explosion expl(x_pos, y_pos);

        expl.setType('M');

        return expl; 
    }

    ~Mine() {};
};


#endif 
