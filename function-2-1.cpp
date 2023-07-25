int min_element(int array[], int n) {
    // return 0 if size is less than 1
    if (n < 1) {
        return 0; 
    }

    // initialise mininmum to first element of array 
    int min = array[0];

    // loop through all elements of array from the second element
    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    // return min val
    return min; 
}