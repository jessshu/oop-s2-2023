#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

#include <iostream>
#include <ctime>

class Car : public Vehicle {
    private:

    public:
        Car();
        Car(int ID);
        int getParkingDuration();
        
};

#endif
