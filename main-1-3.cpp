#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"


#include <iostream>

int main() {
    ParkingLot lot1(10);

    

    for (int i = 0; i < 3; i++) {
        // input vehicle types 
        std::string type;
        std::cout << "Enter the type of vehicle to park: " << std::endl;
        std::cin >> type;

        // input ID 
        int ID;
        std::cout << "Enter the ID of this vehicle: " << std::endl;
        std::cin >> ID;

        Vehicle* vehicle;

        if(type == "car") {
            vehicle = new Car(ID);
            lot1.parkVehicle(vehicle);
        } else if (type == "bus") {
            vehicle = new Bus(ID);
            lot1.parkVehicle(vehicle);

        } else if (type == "bike") {
            vehicle = new Motorbike(ID);
            lot1.parkVehicle(vehicle);
        }

    }
    std::cout<< "Count is: " <<lot1.getCount()<<"\n";
    // to unpark 
    int unpark_ID;
    std::cout << "Enter the ID to unpark: " << std::endl;
    std::cin >> unpark_ID;

    lot1.unparkVehicle(unpark_ID);
 
}
