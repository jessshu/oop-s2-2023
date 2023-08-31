#include "Motorbike.h"
#include "Vehicle.h"

#include <iostream>
#include <ctime>

Motorbike::Motorbike() : Vehicle(0) {
    timeofEntry = time(0);
}

Motorbike::Motorbike(int ID) : Vehicle(ID) {
    timeofEntry = time(0);
}

int Motorbike::getParkingDuration() {
    std::time_t current_time = time(0); 

    int duration = current_time - timeofEntry;

    return duration*.85; 
};