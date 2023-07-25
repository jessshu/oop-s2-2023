#include <iostream>

extern int count_evens(int number);

int main() {
  // initialise variables
  int number = 0;

  // ask for user input
  std::cout << "Enter the number of numbers you want: ";
  std::cin >> number;

  // call to function and print result
  std::cout << "There are " << count_evens(number)
            << " even numbers between 1 and your number." << std::endl;

  return 0;
}