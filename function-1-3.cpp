int num_count(int array[], int n, int number) {

  // initialise counter
  int counter = 0; 

  // return 0 if n is less than 1
  if (n < 1) {
    return 0.0;
  }


// loop over all elements 
  for (int i = 0; i < number; i++) {
    if (array[i] == n) {
        counter++;
    }
  }

  return counter;
}