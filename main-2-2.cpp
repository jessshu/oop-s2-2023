#include "Appliance.h"
#include "TV.h"

#include <iostream>

int main() {
    TV t1; 
    TV t2(10, 20);

    std::cout << t1.get_powerRating() << std::endl; 
    std::cout << t1.TV::getPowerConsumption() << std::endl;

    std::cout << t2.get_powerRating() << std::endl;
    std::cout << t2.TV::getPowerConsumption() << std::endl; 
}
