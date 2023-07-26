bool is_ascending(int array[], int n) {
    // if n is less than 0 return false 
    if (n < 0) {
        return false;
    }

   // intialise minimum value as first element of array 
   int min = array[0]; 

    // loop through all elements of array from second element 
    for (int i = 0; i < n; i++) {
        // return false if next element is less than min
        if (array[i] < min) {
            return false; 
        }

        // reset min to current element 
        min = array[i];
    }

    return true; 
}