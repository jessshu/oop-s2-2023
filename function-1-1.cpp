int sum_diagonal(int array[4][4]) {
    // initialise variables 
    int sum = 0;

    // nest loop to loop over all elements 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // if the row number equals the column number (the diagonal)
            if (i == j) {
                // increment sum by value of element in the diagonal 
                sum = sum + array[i][j];
            }
        }
    }

    return sum; 
}