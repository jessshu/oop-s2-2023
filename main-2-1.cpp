#include "Appliance.h"
#include "Fridge.h"
#include <iostream>

int main() {
    Fridge f1;
    Fridge f2(10,100);

    std::cout << f1.getVolume() << std::endl;
    std::cout << f1.get_powerRating() << std::endl;
    
    std::cout << f2.getVolume() <<std::endl; 
    std::cout << f2.get_powerRating() << std::endl; 

    f1.setVolume(20);

    std::cout << f1.getVolume() << std::endl;

    return 0;
}