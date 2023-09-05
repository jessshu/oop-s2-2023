#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

class House {
    private:
        Appliance** appliances; 
        int numAppliances;
        int counter;

    public:
        House();
        House(int numAppliances);

        bool addAppliance(Appliance* Appliance); // return true if have space 

        double getTotalPowerConsumption();

        ~House();
};

#endif
