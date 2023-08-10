#include <math.h>
#include <iostream>
int bin_to_int(int binary_digits[], int number_of_digits) {
    int decimal = 0;
    int index = 0; // for the power 

    // iterate through all binary digits 
    for (int i = number_of_digits-1; i >= 0; i--) {
        if (binary_digits[i] % 2 == 1) {
            decimal = decimal + pow(2,index);
            index++;
        } else {
            index++;

        }
    }

    return decimal;
}