#include "Car.h"

Car::Car() {}
Car::Car(int price) : price(price), emissions(0) {}

void Car::drive(int kms) {
    emissions = emissions  + (kms*20);
}

int Car::get_price() {
    return price; 
}

void Car::set_price(int newPrice) {
    price = newPrice; 
}

void Car::set_emissions(int newEmissions) {
    emissions = newEmissions;
}

int Car::get_emissions() {
    return emissions; 
};