#include <iostream>

int *readNumbers() {
    int *dyn_array = new int[10]; 

    for (int i = 0; i < 10; i++) {
        std::cout << "Enter a value: ";
        std::cin >> dyn_array[i];
    }
    return dyn_array;
}
void printNumbers(int *numbers,int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i;
        std::cout << " ";
        std::cout << numbers[i];
        std::cout << std::endl;
    }

    return;
}