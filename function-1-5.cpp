int count_evens(int number) { 
    // return 0 if number less than 1 is inputted 
    if (number < 1) {
        return 0; 
    }

    // initialise even counter 
    int even_counter = 0; 

    // loop through all numbers and count evens
    for (int i = 1; i <= number; i++) {
        if (i%2 == 0) {
            even_counter++;
        }
    }

    // return counter
    return even_counter; 
}