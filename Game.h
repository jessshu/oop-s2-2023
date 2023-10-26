#ifndef GAME_H
#define GAME_H

#include <iostream> 
#include <tuple> 
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

class Game
{
private:
    std::vector<GameEntity*> entities;
public:
    Game(/* args */);

    void setEntities() {

    };

    std::vector<GameEntity*> getEntities() {
        return entities;
    };

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {

        // initialise ships and mines 
        for (int i = 0; i < numShips; i++) {
            std::tuple<int,int> pos = Utils::generateRandomPost(gridWidth,gridHeight);
            Ship ship(std::get<0>(pos),std::get<1>(pos));

            entities.push_back(&ship);
        }

        for (int j = 0; j < numMines; j++) {
            std::tuple<int,int> pos = Utils::generateRandomPost(gridWidth,gridHeight);
            Mine mine(std::get<0>(pos),std::get<1>(pos));

            entities.push_back(&mine);    
                 
        }
    };

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        int numShips = 0;
        int index = 0;
        while(index < maxIterations) {

        for (int i = 0; i < entities.size(); i++) {
            // counter for ships 
            if (entities[i]->getType() == 'S') {
                numShips++; // bc ships are all initialised first in the vector
            }

        }
        // move for all ships 

        for (int j = 0; j < numShips; j++) {
            entities[j]->move(1,0);

        }
        }
        
    };




    ~Game();
};



#endif 
