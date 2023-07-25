double array_mean(int array[], int n) {
    // return 0 if n is less than 1
  if (n < 1) {
    return 0.0;
  }

// initialise 
  int sum = 0;
  double ave = 0; 

// loop for calculating running sum 
  for (int i = 0; i < n; i++) {
    sum = sum + array[i];
  }

  // calc average using sum 
  ave =  sum / (double) n;


  return ave;
}