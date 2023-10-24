#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream> 
#include <tuple>

class GameEntity
{
private:
    std::tuple<int, int> position; // representing the position of entity 
    char type; // type of entity
public:
    GameEntity(int x, int y, char type) {

    };

    std::tuple<int, int> getPos() {
        return position;
    }; 

    char getType() {
        return type;
    }; 

    ~GameEntity();
};

#endif 
