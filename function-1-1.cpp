int array_sum(int array[], int n) {

// return 0 if n is less than 1
  if (n < 1) {
    return 0;
  }

// initialise running sum
  int sum = 0;

// loop for calculating running sum 
  for (int i = 0; i <= n; i++) {
    sum = sum + array[i];
  }

  return sum;
}