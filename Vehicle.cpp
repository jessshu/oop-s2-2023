#include "Vehicle.h"
#include <ctime>
#include <iostream>

Vehicle::Vehicle() {}

Vehicle::Vehicle(int ID) : ID(ID) {
    timeofEntry=time(0);
}

int Vehicle::getID() {
    return ID;
}

int Vehicle::getParkingDuration() {

    return 0; 
};

