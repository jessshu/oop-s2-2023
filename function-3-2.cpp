#include <iostream>
#include <cmath>

int median_array(int array[], int n) {
    // return 0 if n is less than 1
    if (n < 1 || n%2 ==0) {
        return false;
    }
    
    // sort 
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (array[i] > array[j]) {
                std::swap(array[i],array[j]);
            }
        }
    }

    // find median 
    int median = 0;

    median = array[((n+1)/2)-1];

    return median;
}