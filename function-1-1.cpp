#include "Person.h"

Person* createPersonArray(int n) {
    // init array for structs 
    Person *array= new Person[n]; 

    for (int i = 0; i < n; i++) {
        array[i].age = 0;
        array[i].name = "John Doe";
    }

    return array;
}