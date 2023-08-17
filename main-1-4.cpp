#include <iostream>
#include "Person.h"
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int len = 3;
    PersonList NewList;

    PersonList shallowList = shallowCopyPersonList(NewList);

    for (int i = 0; i < len; i++) {
        std::cout << NewList.people[i].name << std::endl;
    }

    return 0;
}