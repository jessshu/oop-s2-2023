#include "Car.h" 
#include <iostream>

int main() {
    Car c1(100);

    c1.drive(10);

    std::cout << c1.get_emissions() << std::endl;
    return 0;
}