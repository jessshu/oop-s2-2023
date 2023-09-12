#ifndef GRADEBOOk_H
#define GRADEBOOK_H

#include <iostream>

class Gradebook {
private:
   
public:
    Gradebook();

    void addGrade(int stud_id, int course_id, std::string assignment, int value);
};

#endif 
