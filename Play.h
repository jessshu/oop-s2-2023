#ifndef PLAY_H
#define PLAY_H

#include <iostream>
#include <tuple>
#include <vector>

#include "Spot.h"
#include "Persona.h"
#include "Assists.h"

class Play
{
private:
    std::vector<Spot*> matrix;

public:
    Play() {}; 

    std::vector<Spot*>& getMatrix(){
        return matrix; 
    };

    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight) {
        // init personas 
        for (int i = 0; i < numPersonas; i++) {
            std::tuple<int,int> loc; 
            loc = Assists::createRandomLoc(matrixWidth,matrixHeight);

            matrix.push_back(new Persona(std::get<0>(loc), std::get<1>(loc)));
        }

        // init snares 
        for (int i = 0; i < numSnares; i++) {
            std::tuple<int,int> loc; 
            loc = Assists::createRandomLoc(matrixWidth,matrixHeight);

            matrix.push_back(new Snare(std::get<0>(loc), std::get<1>(loc)));       
        }
    };

    void playCycle(int maxCycles, double snareTriggerDistance) {
        int index = 0; 

        // determine how big the matrix is 

        while (index < maxCycles) {

            for (int i =0; i < matrix.size(); i++) {
                // if persona, call shift
                if (matrix[i]->getCategory() == 'P') {
                    matrix[i]->shift(1,0); 
                }

                for (int j = 0; j < matrix.size(); j++) {
                    if (matrix[j]->getCategory() == 'S') {
                        if (Assists::evaluateDistance(matrix[i]->getLoc(), matrix[j]->getLoc()) > snareTriggerDistance) {
                            matrix[j]->implement(*matrix[i]); 
                        }
                    }
                }

                std::tuple<int,int> persona_loc = matrix[i]->getLoc(); 

                if (std::get<0>(persona_loc) > matrix.size() || std::get<1>(persona_loc) > matrix.size()) {
                    std::cout << "Person has won the game!" << std::endl; 
                    break; 
                }

            }
            index++; 
        }

        if (index = maxCycles) {
            std::cout << "Maximum number of cycles reached. Game over." << std::endl; 
        }


    };

    ~Play() {   };
};


#endif
