#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList deep;

    deep.people = new Person[pl.numPeople];

    for (int i = 0; i < pl.numPeople; i++) {
        deep.people[i].name = pl.people[i].name;
        deep.people[i].age = pl.people[i].age;
    }
    
    deep.numPeople = pl.numPeople;

    return deep;

}