#include "Car.h"
#include "Tesla.h"
#include <iostream>

int main() {
    Tesla t1('S', 1000);

    std::cout << t1.get_batteryPercentage() << std::endl; 

    t1.drive(10);

    std::cout << t1.get_batteryPercentage() << std::endl;
    std::cout << t1.get_emissions() << std::endl;

    t1.chargeBattery(100); 

    std::cout << t1.get_batteryPercentage() <<std::endl; 

    return 0;
}
