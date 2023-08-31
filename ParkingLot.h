#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <iostream> 

class ParkingLot {
    private:
        int max_vehicles;
        int vehicle_count; 
        Vehicle** vehicles;


    public:
 
        ParkingLot();
        ParkingLot(int max_vehicles);

        int getCount();
        bool parkVehicle(Vehicle* new_vehicle);
        bool unparkVehicle(int ID);



};

#endif
