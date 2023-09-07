#ifndef FORD_H
#define FORD_H
#include "Car.h"

class Ford : public Car 
{
private: 
    int badgeNumber;
    float litresOfFuel;      // Initially 60L

public:
    Ford();            
    Ford(int badgeNumber, int price);  


    void refuel(int litres); // cannot exceed 60l
    void drive(int kms);     

    void set_badgeNumber(int newBadgenum);
    void set_litresOfFuel(float newLitres);
    int get_badgeNumber();
    float get_litresOfFuel();


};

#endif
