#include "Car.h"
#include "Tesla.h"

Tesla::Tesla() {};
Tesla::Tesla(char model, int price) : Car(price), model(model), batteryPercentage(100) {}

void Tesla::chargeBattery(int mins) {
    for (int i = 0; i < mins; i++) {
        while (batteryPercentage < 100) {
                batteryPercentage = batteryPercentage + 0.5;
        }
    }

}

void Tesla::drive(int kms) {
    if (batteryPercentage == 0) {
        emissions = emissions; 
    } else {
        emissions = emissions + (kms*74);
        batteryPercentage = batteryPercentage - (kms/5); // this rounding needs checking

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


