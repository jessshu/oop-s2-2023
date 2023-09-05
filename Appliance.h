#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

class Appliance {
    public: 
        Appliance();
        Appliance(int powerRating);

        int powerRating;
        bool isOn;

        void turnOn();
        void turnOff();
        virtual double getPowerConsumption();

        bool get_isOn();
        int get_powerRating();
        void set_powerRating(int new_powerRating);

};

#endif
