# include <iostream>

bool is_palindrome(int integers[], int length) {
    if (length < 0) {
        return false; 
    }
    
    // determine if palin
    if(length % 2 == 1) {
        // if odd number of elements in array 
        for (int i = length; i >=0; i--) {
            if (integers[i] == integers[length-i]) {
                return true;
            } else {

            }
        }
    } else {
        // if even number of elements in array
        for (int j = length; j >= (length/2)-1; j--) {
            if (integers[j] == integers[length-j]) {
                return true;
            } else {
                return false;
            }
        }
    }

    return false; 
}

int sum_array_elements(int integers[], int length) {
    int sum = 0; 

    for (int i = 0; i < length; i++) {
        sum = sum + integers[i];
    }

    return sum;
}
int sum_if_palindrome(int integers[], int length) {
    int sum = 0;

    if (is_palindrome(integers,length) == true) {
        // call sum function
        sum = sum_array_elements(integers,length);
        return sum;
    } else {
        return -2; 
    }
}