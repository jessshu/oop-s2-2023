#include "Bus.h"
#include "Vehicle.h"

#include <iostream>
#include <ctime>

Bus::Bus() : Vehicle(0) {
    timeofEntry = time(0);
}

Bus::Bus(int ID): Vehicle(ID) {
    timeofEntry = time(0);
}

int Bus::getParkingDuration() {
    std::time_t current_time = time(0); 

    int duration = current_time - timeofEntry;

    return duration; 
};