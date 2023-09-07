#include "Fleet.h"
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet() {
    fleet = new Car*[5];

    Tesla *c1;
    c1->set_model('S');
    c1->set_price(10000);

    Ford* c2;
    c2->set_badgeNumber(1);
    c2->set_price(20000);

    Car* c3;
    c3->set_price(3000);

    Ford* c4; 
    c4->set_price(40000);
    c4->set_badgeNumber(2);

    Tesla* c5;
    c5->set_model('T');
    c5->set_price(50000);


    fleet[0]= c1;
    fleet[1]= c2; 
    fleet[2]= c3; 
    fleet[3] = c4;
    fleet[4] = c5;



}

Car **Fleet::get_fleet() {
    return fleet; 
}
