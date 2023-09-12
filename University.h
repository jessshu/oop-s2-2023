#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include "Course.h"
#include "Gradebook.h"

class University {
protected:
    std::string name;
    std::string location; 
    Course* courses;
    Gradebook* gradebooks;

public:
    University();

    void addCourse(int id, std::string name);  

};

#endif
