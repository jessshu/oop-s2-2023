double sum_even(double array[], int n) {
    // return 0 if n is less than 1
    if (n < 1) {
        return 0;
    }
    
    // initialise variables 
    double sum = 0;
    
    // loop over array 
    for (int i = 0; i < n; i++) {
        // calculate running sum
        sum = sum + array[i];
        i++; // increment i to skip odd positions 
    }

    return sum;
}