#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla : public Car
{
private:
    char model;
    float batteryPercentage;      // Initially 100%

                            //always range between 0 and 100. 
                            //If the value inputted is less than 0, 
                            //set it to 0. If the value inputted is more 
                            //than 100, set it to 100. 

public:
    Tesla();            
    Tesla(char model, int price);  
    
    void chargeBattery(int mins);  //add 0.5% to the 
                                //batteryPercentage attribute 
                                //for every minute charged, but cannot 
                                //exceed 100% charged.    

    void drive(int kms);   // inherited 

    char get_model();
    void set_model(char new_model);
    float get_batteryPercentage(); 
    void set_batteryPercentage(float new_batteryPercentage);
};

#endif