int sum_two_arrays(int array[], int secondarray[], int n) {
  // initialse sum variables 
  int sum1 = 0; 
  int sum2 = 0; 
  int total_sum = 0;  
  
  // return 0 if n is less than 1
  if (n < 1) {
    return 0;
  }

  // loop over both arrays 
  for (int i = 0; i < n; i++) {
    sum1 = sum1 + array[i]; 
    sum2 = sum2 + secondarray[i];
  }
  
  // calculate sum of both arrays 
  total_sum = sum1 + sum2; 

  return total_sum;
}