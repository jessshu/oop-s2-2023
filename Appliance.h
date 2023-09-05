#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

class Appliance {
    protected:
        int powerRating;
        bool isOn;

    public: 
        Appliance();
        Appliance(int powerRating);

        void turnOn();
        void turnOff();
        virtual double getPowerConsumption();

        bool get_isOn();
        int get_powerRating();
        void set_powerRating(int new_powerRating);

};

#endif
