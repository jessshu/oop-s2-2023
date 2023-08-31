#include <iostream>

#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    // initialise variables 
    int ID = 0;
    int num_vehicles = 0;


    //prompt for input 
    std::cout << "Enter the number of vehicles: " << std::endl;
    std::cin >> num_vehicles; 

    Vehicle* vehicles = new Vehicle[num_vehicles];

    for (int i = 0; i < num_vehicles; i++) {
        std::string vehicle_type;
        std::cout << "Enter the type of vehicle (" << i << "): " << std::endl;
        std::cin >> vehicle_type;

        std::cout << "Enter the ID of this vehicle: " << std::endl;
        std::cin >> ID;

        if(vehicle_type == "car") {
            vehicles[i] = Car(ID);
        } else if ( vehicle_type == "bus") {
            vehicles[i] = Bus(ID);
        } else if (vehicle_type == "motorbike") {
            vehicles[i] = Motorbike(ID);
        }
    }

    for (int j = 0; j < num_vehicles; j++) {
        std::cout << vehicles[j].getParkingDuration() << std::endl;
    }
}