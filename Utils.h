#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <tuple>
#include <math.h>
#include "GameEntity.h"
#include "Effect.h"

class Utils
{
private:
    
public:

    Utils(); 

    static std::tuple<int, int> generateRandomPost(int gridWidth, int gridHeight) {
        // use rand() to generate random integer from 0 to gridWidth 
        int x_val = rand() % gridWidth+1;
        int y_val = rand() % gridHeight+1; 

        std::tuple<int,int> randomPost; 
        randomPost = std::make_tuple(x_val, y_val); 

        return randomPost; 
    };

    static double calculateDistance(std::tuple<int,int> pos1, std::tuple<int, int> pos2) {
        // equation : sqrt((x2-x1)^2+(y2-y1)^2)
        double distance = sqrt(pow((std::get<0>(pos2) - std::get<0>(pos1)),2) - pow((std::get<1>(pos2) - std::get<1>(pos1)),2));

        return distance; 
    };

    ~Utils(); 


};

#endif
