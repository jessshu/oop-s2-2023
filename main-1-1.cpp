#include "Appliance.h"
#include <iostream>

int main() {
    Appliance a1;
    
    std::cout << a1.get_isOn() << std::endl; 
    std::cout << a1.get_powerRating() << std::endl;

    a1.turnOn();
    a1.set_powerRating(10);

    std::cout << a1.get_isOn() << std::endl;
    std::cout << a1.get_powerRating() << std::endl;  
}
