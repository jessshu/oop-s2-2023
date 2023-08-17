#include <iostream>
#include "Person.h"
extern PersonList createPersonList(int n);

int main() {
    int len = 3;
    PersonList NewList = createPersonList(len);

    for (int i = 0; i < len; i++) {
        std::cout << NewList.people[i].name << std::endl;
    }

    return 0;
}