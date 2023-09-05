#include "Fridge.h"
#include "Appliance.h"

Fridge::Fridge() : Appliance(0), volume(0) {
    isOn = false;
}

Fridge::Fridge(int powerRating, double volume): Appliance(powerRating), volume(volume) {}

void Fridge::setVolume(int new_volume) {
    volume = new_volume;
}

double Fridge::getVolume() {
    return volume; 
}

double Fridge::getPowerConsumption() {
    double powerConsumption = powerRating*24*(volume/100);
    return powerConsumption;
}

