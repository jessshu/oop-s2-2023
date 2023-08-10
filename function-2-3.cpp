bool is_array_palindrome(int integers[], int length) {
    if (length <= 0) {
        return false; 
    }

    if (length % 2 == 1) { // if odd
        for (int i = 0; i < length/2; i++) {
            if (integers[i] != integers[length-i]) {
                return false;
            }
    } 
    } else {
        for (int i = 0; i < length/2; i++) {
            if (integers[i] != integers[length-i-1]) {
                return false;
            }
        }       
    }


    return true;
}

int sum_integers(int integers[], int length) {
    if (length <= 0) {
        return false; 
    }
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum = sum + integers[i];
    }

    return sum;
}

int palindrome_sum(int integers[], int length) {
    if (length <= 0) {
        return false; 
    }

    int psum = 0;

    if (is_array_palindrome(integers, length) == true) {
        psum = sum_integers(integers, length);
    } else {
        return -2;
    }

    return psum;
}