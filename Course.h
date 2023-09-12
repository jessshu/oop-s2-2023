#ifndef COURSE_H
#define COURSE_H
#include "Person.h"

#include <iostream>

class Course {
private:
    std::string name; 
    int id; 
    Person** persons; 

public:
    Course();

    void addPerson(Person*);
};

#endif