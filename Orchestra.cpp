#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra():Orchestra(0) {   };

Orchestra::Orchestra(int size): size(size), curr_size(0), members(members) {
    members = new Musician[size];
};

int Orchestra::get_current_number_of_members() {
    // return num musicians who have joined orch
    return curr_size; 
};

bool Orchestra::has_instrument(std::string instrument) {
    // return true if musician plays specified instrument
    for (int i =0; i < curr_size; i++) {
        if (instrument == members[i].get_instrument()) {
            return true; 
        } else {
            return false;  
        }
    }
};

Musician *Orchestra::get_members() {
    // return array of members 
    return members; 
};

bool Orchestra::add_musician(Musician new_musician) {
    // return true and add musician if orch is not full 
    if (Orchestra::get_current_number_of_members() < curr_size) {
        int counter; 
        curr_size++;
        members[counter] = new_musician; 
        counter++;
        return true;
    } else {
        return false; 
    }
};

Orchestra::~Orchestra() {
    delete[] members; 
}
