bool is_fanarray(int array[], int n) {
    // if n is less than 1
    if (n < 1) {
        return false;
    }
    
    // loop
    for (int i = 0; i < n/2; i++) {
        // if opposite elements are not the same then return false 
        if (array[i] != array[n-i-1] || array[i] > array[i+1]) {
            return false; 
        }
    } 

    return true;
}