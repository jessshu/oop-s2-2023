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