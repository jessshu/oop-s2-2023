#include "Car.h"
#include "Tesla.h"

Tesla::Tesla() {};
Tesla::Tesla(char model, int price) : Car(price), model(model), batteryPercentage(100) {}

void Tesla::chargeBattery(int mins) {
    if (batteryPercentage+(mins*0.5) > 100) {
        batteryPercentage = 100;
    } else {
        batteryPercentage = batteryPercentage + (0.5*mins);
    }
}

void Tesla::drive(int kms) {
    if (emissions + (kms*74.0) > 37000) {
        emissions = 37000;
    } else {
        emissions = emissions + (kms*74.0);
    }

        if (batteryPercentage - (kms/5) > 0) {
            batteryPercentage = batteryPercentage - (kms/5.0);
        } else {
            batteryPercentage = 0;
        }
    
}


char Tesla::get_model() {
    return model;
}

void Tesla::set_model(char new_model) {
    model = new_model;
}

float Tesla::get_batteryPercentage() {
    return batteryPercentage;
}

void Tesla::set_batteryPercentage(float new_batteryPercentage) {
    batteryPercentage = new_batteryPercentage;
}


