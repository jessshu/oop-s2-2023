#include "Appliance.h"
#include <iostream>

int main() {
    Appliance a1;
    
    std::cout << a1.isOn << std::endl; 
    std::cout << a1.powerRating << std::endl;

    a1.turnOn();

    std::cout << a1.isOn << std::endl;
}
