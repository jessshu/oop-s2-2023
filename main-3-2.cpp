#include <iostream>
extern int* reverseArray(int *numbers1,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int* readNumbers();

int main() {
    int len = 10; 
    int *array;
    int *reversed;

    array = readNumbers();

    reversed = reverseArray(array, len);

    for (int i = 0; i < 10; i++) {
        std::cout << reversed[i] << " ";
    }
    std::cout << std::endl;

    if (equalsArray(array, reversed, len) == 1) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    delete[] array;
    delete[] reversed;
    return 0;
}