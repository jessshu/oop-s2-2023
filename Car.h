#ifndef CAR_H
#define CAR_H

class Car
{
protected:
    int price;
    int emissions;   // CO2 Emissions

public:
    Car();
    Car(int price);   // creates a Car with a price

    virtual void drive(int kms); //It should update emissions by 20 * kms. 
                                //e.g. If the car drived for 10 kms, emission 
                                //will become 20 * 10 = 200.

    int get_price();
    int get_emissions(); 
    void set_price(int newPrice);
    void set_emissions(int newEmissions);
    
};

#endif