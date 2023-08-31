#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

#include <iostream>
#include <ctime>

class Bus : public Vehicle {
    private:

    public:
        Bus();
        Bus(int ID);
        int getParkingDuration();
        
};

#endif
