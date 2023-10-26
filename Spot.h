#ifndef SPOT_H
#define SPOT_H

#include <iostream>
#include <tuple>

class Spot
{
private:
    std::tuple<int, int> location;
    char category; 
public:
    Spot() {};

    Spot(int x, int y, char category) : location(x,y), category(category) { };

    std::tuple<int, int> getLoc() {
        return location; 
    };

    char getCategory() {
        return category;
    };

    void setLoc(int x, int y) {
        std::tuple<int,int> loc(x,y); 
        location = loc;
    };

    void setCategory(char category_) {
        category = category_; 
    };

    ~Spot() {};
};

#endif
