#include "Mammal.h"
#include "Animal.h"
#include "Bird.h"
#include <iostream> 

int main() {
    Animal a1(50);
    Mammal human(1,10);
    Bird bird1(1,5);
    Bird bird2(1,5);

    std::cout << a1.get_weight() << std::endl;
    std::cout << human.get_weight() << std::endl;

    human.add_Food();
    bird1.add_Food();

    std::cout << bird1.get_Food() << std::endl;

    bird2.hatchEggs(5);
    bird2.add_Food();


    std::cout << bird2.get_Food() << std::endl;
    
    std::cout << bird2.get_weight() << std::endl;



    return 0;
}