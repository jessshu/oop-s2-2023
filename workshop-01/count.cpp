int count(int array[], int n) {

    int even_count = 0; 

    // calculate even number and count 
    for (int i = 0; i < n; i++) {
        if (array[i]%2 == 0) {
            even_count = even_count+1;
        }
    }

    // return result
    return even_count; 
}
