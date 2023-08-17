#include <iostream>
#include "Person.h"
extern PersonList deepCopyPersonList(PersonList pl);

int main() {
    int len = 3; 
    PersonList OldList;
    
    PersonList deep = deepCopyPersonList(OldList);

    for (int i = 0; i < len; i++) {
        std::cout << deep.people[i].name << std::endl;
    }


    return 0;
}