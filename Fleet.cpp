#include "Fleet.h"
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet() {
    fleet = new Car*[5];
    fleet[0] = Tesla('S', 10000);
    fleet[1] = Ford(1, 20000);
    fleet[2] = Car(30000);
    fleet[3] = Ford(2, 40000); 
    fleet[4] = Tesla('T', 50000);
}

