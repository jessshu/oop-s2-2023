#ifndef ASSISTS_H 
#define ASSISTS_H

#include <iostream>
#include <tuple>
#include <random>

class Assists
{
private:
    /* data */
public:
    Assists() {};
    Assists(/* args */);

    std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) {
        int x_val = rand() % (matrixWidth+1);
        int y_val = rand() % (matrixHeight+1);

        std::tuple<int,int> randLoc(x_val,y_val);

        return randLoc; 
    };

    double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
        double x = std::get<0>(loc2) - std::get<0>(loc1); 
        double y = std::get<1>(loc2) - std::get<1>(loc1); 

        double distance = sqrt(pow(x,2) + pow(y,2));

        return distance; 
    };

    ~Assists();
};




#endif 
