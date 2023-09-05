#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"


House::House() : numAppliances(0) {};

House::House(int numAppliances) : numAppliances(numAppliances), counter(0) {
   appliances = new Appliance*[numAppliances]; 
}

bool House::addAppliance(Appliance* Appliance) {
    if (counter < numAppliances) {
        appliances[counter] = Appliance;
        counter++; 
        return true;
    } else {
        return false; 
    }

}

double House::getTotalPowerConsumption() {
    double total=0;
    for (int i = 0; i < counter; i++) {
        total = total + appliances[i]->getPowerConsumption();
    }

    return total; 
}

House::~House() {
    delete[] appliances; 
};
