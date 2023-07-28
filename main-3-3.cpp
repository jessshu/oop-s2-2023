#include <iostream> 
extern double weighted_average(int array[], int n); 

int main() {
    // initialise variables 
    int len = 0; 

    // prompt for user input 
    std::cout << "Enter the length of your array: ";
    std::cin >> len;

    // initialise array
    int array[len];

    // prompt for user input 
    for (int i = 0; i < len; i++) {
        std::cout << "Enter a value: ";
        std::cin >> array[i];
    }

    // call to function and display result 
    std::cout << "The weighted average of this array is " << weighted_average(array, len) << std::endl;

    return 0; 
}