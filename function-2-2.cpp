#include <iostream> 
#include <math.h>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int sum = 0;
    int index = 0;

    for (int i = number_of_digits-1; i >= 0; i--) {
        if (binary_digits[i] == 1) {
            sum = sum + pow(2,index);
            index++;
        } else {
            index++;
        }
    }

    return sum;
}