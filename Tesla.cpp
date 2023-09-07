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
        while (batteryPercentage > 0) {
            for (int i = 0; i < kms; i++) {
                emissions = emissions + (i*74.0);
                batteryPercentage = batteryPercentage - 0.2;
            }
        }

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


