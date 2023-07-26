bool is_descending(int array[], int n) {
    // if n is less than 0 return false 
    if (n < 0) {
        return false;
    }

   // intialise maximum value as first element of array 
   int max = array[0]; 

    // loop through all elements of array from second element 
    for (int i = 0; i < n; i++) {
        // return false if next element is less than max
        if (array[i] > max) {
            return false; 
        }

        // reset max to current element 
        max = array[i];
    }

    return true; 
}