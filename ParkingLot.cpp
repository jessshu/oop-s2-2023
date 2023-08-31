#include "Vehicle.h"
#include "ParkingLot.h"

#include <iostream>

ParkingLot::ParkingLot():max_vehicles(0) {}
ParkingLot::ParkingLot(int max_vehicles) : max_vehicles(max_vehicles), vehicle_count(0) {
    vehicles = new Vehicle*[max_vehicles];
}

int ParkingLot::getCount() {
    return vehicle_count;
}

bool ParkingLot::parkVehicle(Vehicle* new_vehicle) {
    if ( vehicle_count < max_vehicles) {
        vehicles[vehicle_count] = new_vehicle;
        vehicle_count++;
        return true;
    } else {
        std::cout << "The lot is full." << std::endl;
        return false;
    }

    return false; 
}

bool ParkingLot::unparkVehicle(int ID) {
    for (int i = 0; i < vehicle_count; i++) {
        if (vehicles[i]->getID() == ID) {
            vehicle_count--;

            return true;
        } else {
            std::cout << "Vehicle not in the lot." << std::endl;
            return false;
        }
    }

    return false;
};

