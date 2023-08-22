#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
    std::string instrument;
    int experience;

public:
    // default
    Musician(): Musician("null", 0) {};

    // methods
    Musician(std::string instrument, int experience);
    std::string get_instrument();
    int get_experience();

};

#endif
