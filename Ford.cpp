#include "Ford.h"
#include "Car.h"

Ford::Ford() {}
Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber(badgeNumber), litresOfFuel(60) {}

void Ford::refuel(int litres) {
    if (litres+litresOfFuel > 60) {
        litresOfFuel = 60;
    } else {
        litresOfFuel = litres + litresOfFuel;
    }
}

void Ford::drive(int kms) {
    if (litresOfFuel > 0) {
        emissions = emissions + kms*234.0;
        litresOfFuel = litresOfFuel - (kms/5.0);
    }
}

void Ford::set_badgeNumber(int newBadgenum) {
    badgeNumber = newBadgenum;
}

int Ford::get_badgeNumber() {
    return badgeNumber;
}

void Ford::set_litresOfFuel(float newLitres) {
    // may need if statemnet 
    if (litresOfFuel + newLitres > 60) {
        litresOfFuel = 60; 
    } else {
        litresOfFuel = newLitres;
    }

}

float Ford::get_litresOfFuel() {
    return litresOfFuel;
};

