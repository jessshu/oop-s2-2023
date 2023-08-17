#include <iostream>
#include "Person.h" 
extern PersonList createPersonList(int n);

int main() {
    int len = 3;
    PersonList arr = createPersonList(len);

    for (int i = 0; i < len; i++) {
        std::cout << arr.people[i].name << std::endl;
    }
    

    return 0;
}