#include <iostream>
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
  // initialise variables
  int lim = 0;

  // ask for input
  std::cout << "Enter the length of your arrays: ";
  std::cin >> lim;

  int array1[lim];
  int array2[lim];

  // loop to read in values for first array 
  for (int i = 0; i < lim; i++) {
    std::cout << "Enter a value for array 1: ";
    std::cin >> array1[i];
  }

  // loop to read in values for second array 
  for (int i = 0; i < lim; i++) {
    std::cout << "Enter a value for array 2: ";
    std::cin >> array2[i];
  }

  // display result
  std::cout << "The sum of your 2 arrays is: " << sum_two_arrays(array1, array2, lim)
            << std::endl;

  return 0;
}