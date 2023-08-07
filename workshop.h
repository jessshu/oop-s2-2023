#include <iostream>

// part 2: 
void changeValue(double* number) {
    *number = 42;

    return;
}

// part 3 
void printArray(double* array, int length) {
   
    for (int i = 0; i < length; i++) {
        std::cout << array[i];
    }
    std::cout << std::endl;

    return;
}

// part 4 
double arrayMax(double* array, int length) {
    double max = array[0]; // initialise max as first element

    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max; 
}


// part 7
double* dynamicArray(int N, double M) {

    double * array = new double[N];

    // initialise with values 
    for (int i = 0; i < N; i++) {
        array[i] = M;
    }

    return array;
}


