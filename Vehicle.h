#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <ctime>

class Vehicle {
    protected:
        std::time_t timeofEntry; // should be initialised as time of object creation 
        int ID;
    public:
        Vehicle();
        Vehicle(int ID);

        int getID();
        virtual int getParkingDuration(); 
    
};

#endif
