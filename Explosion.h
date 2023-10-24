#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect
{
private:

public:

    Explosion(int x, int y) { 
        GameEntity explosion(x, y, 'E');
    };

    void apply(GameEntity& explosion) {
        explosion.setPos(-1,-1);
        explosion.setType('X');
    }

    ~Explosion();
};

#endif 
