#include "Fleet.h"
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet() {
    fleet = new Car*[5];

    Tesla c1('S', 10000);
    Ford c2(1, 20000);
    Car c3(30000);
    Ford c4(2, 40000); 
    Tesla c5('T', 50000);

    fleet[0]= &c1;
    fleet[1]= &c2; 
    fleet[2]= &c3; 
    fleet[3] = &c4;
    fleet[4] = &c5;



}

Car **Fleet::get_fleet() {
    return fleet; 
}
