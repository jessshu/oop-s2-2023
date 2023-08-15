#include <iostream>

bool equalsArray(int *numbers1,int *numbers2,int length) {
    int counter = 0;
    
    if (length < 1) {
        return false; 
    }

    for (int i = 0; i < length; i++) {
        if (numbers1[i] == numbers2[i]) {
            counter++;
        } else {
            return false;
        }
    }

    if (counter ==length) {
        return true;
    }
    return false;
}

int *readNumbers() {
    int *dyn_array = new int[10]; 

    for (int i = 0; i < 10; i++) {
        std::cout << "Enter a value: ";
        std::cin >> dyn_array[i];
    }
    return dyn_array;
}

int *reverseArray(int *numbers1,int length) {
    int *rev_array[length];
    int counter = 0;

    for (int i = length-1; i >= 0; i--) {
        rev_array[i] = &numbers1[counter];
        counter++;
    }

    return *rev_array;
}
