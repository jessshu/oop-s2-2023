#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"

#include <iostream>
#include <ctime>

class Motorbike : public Vehicle {
    private:

    public:
        Motorbike();
        Motorbike(int ID);
        int getParkingDuration();
        
};

#endif
