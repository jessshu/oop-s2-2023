#include <iostream>
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *readNumbers();

int main() {
    int len = 10;
    int *array1;
    int *array2;

    array1 = readNumbers();
    std::cout << "Next array: " << std::endl;
    array2 = readNumbers();

    if (equalsArray(array1,array2, len) == 1) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    delete[] array1;
    delete[] array2;

    return 0;
}