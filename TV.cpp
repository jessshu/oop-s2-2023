#include "TV.h"
#include "Appliance.h"

TV::TV() : Appliance(0), screenSize(0) {
    isOn = false; 
}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

void TV::setScreenSize(double newScreenSize) {
    screenSize = newScreenSize;
}

double TV::getScreenSize() {
    return screenSize;
}

double TV::getPowerConsumption() {
    double powerConsumption = powerRating * (screenSize/10);
    return powerConsumption;
}
