#include <iostream>
extern int num_count(int array[], int n, int number);

int main() {
  // initialise variables
  int num = 0;
  int n = 0; 

  // ask for input 
  std::cout << "Enter the length of your array: ";
  std::cin >> num;

  std::cout << "Enter your desired number: ";
  std::cin >> n; 

  int array[num];

// loop to read in values 
  for (int i = 0; i < num; i++) {
    std::cout << "Enter a value: ";
    std::cin >> array[i];
  }

  // display result 
  std::cout << "There are " << num_count(array, n, num) << " numbers that match your input." << std::endl;

  return 0;
}
