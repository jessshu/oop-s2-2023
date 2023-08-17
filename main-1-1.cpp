#include <iostream> 
#include <string> 
#include "Person.h"
extern Person* createPersonArray(int n);

int main() {
    int len = 3;
    Person *array = createPersonArray(len);

    // print to test 
    for (int i = 0; i < len; i++) {
        std::cout << array[i].age << std::endl;
    }

    delete[] array;
    return 0;
}