# include <iostream>
extern double sum_even(double array[], int n);

int main() {
    // initialise 
    int len = 0;

    // prompt for input 
    std::cout << "Enter the length of your array: ";
    std::cin >> len;

    // initialise array
    double array[len]; 

    // prompt user input 
    for (int i = 0; i < len; i++) {
        std::cout << "Enter a value: ";
        std::cin >> array[i];
    }

    //call to function 
    std::cout << "The sum of elements in even positions is "
              << sum_even(array,len) << std::endl;
}