#include "Vehicle.h"
#include "Car.h"

#include <iostream>
#include <ctime>

Car::Car() {
    timeofEntry = time(0);
}

Car::Car(int ID):Vehicle(ID) {
    timeofEntry = time(0);
}

int Car::getParkingDuration() {
    std::time_t current_time = time(0); 

    int duration = current_time - timeofEntry;

    return duration; 
};

