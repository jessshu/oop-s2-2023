#include <iostream>
#include "workshop.h"

int main() {
    // part 2 ------------------
    double temp = 10.0;
    double* number = &temp;
    changeValue(number);
    // call to changeValue
    std::cout << *number << std::endl;

    // part 3 ------------------
    int len = 5;
    double array[5] = {1,2,3,4,5}; 
    printArray(array, len);


    // part 4 ------------------
    int length = 5;
    double arr[5] = {13.5,4,2,77.3,23.1};
    std::cout << arrayMax(arr, length) << std::endl;

    // part 5 ------------------
    int N = 5;
    double M = 2.5;

    // print 
    for (int i = 0; i < N; i++) {
        std::cout << dynamicArray(N,M)[i];
        std::cout << " ";
    }
    std::cout << std::endl;
    
 return 0;
}
