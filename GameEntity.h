#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream> 
#include <tuple>

class GameEntity
{
protected:
    std::tuple<int, int> position; // representing the position of entity 
    char type; // type of entity
public:

    GameEntity() {}; 
    
    GameEntity(int x, int y, char type) {    };

    std::tuple<int, int> getPos() {
        return position;
    }; 

    char getType() {
        return type;
    }; 

    void setPos(int x_, int y_) {
        position = std::make_tuple(x_,y_);
    };

    void setType(char type_) {
        type = type_;
    }

    ~GameEntity() {};
};

#endif 
