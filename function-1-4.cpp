#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList NewList;

    NewList = pl;

    return NewList;
}