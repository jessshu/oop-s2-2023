#include "Appliance.h"

Appliance::Appliance() : powerRating(0) {
    isOn = false; 
}

Appliance::Appliance(int powerRating) : powerRating(powerRating) {

}

void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false; 
}

double Appliance::getPowerConsumption() {
    return 0;
}