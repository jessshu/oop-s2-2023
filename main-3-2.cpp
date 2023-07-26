#include <iostream> 
extern int median_array(int array[], int n);

int main() {
    // initialise 
    int len = 0;
    
    // prompt for input 
    std::cout << "Enter the length of your array: ";
    std::cin >> len;

    // initialise array
   int array[len];

    // prompt for user input using loop 
    for (int i = 0; i < len; i++) {
        std::cout << "Enter a value: ";
        std::cin >> array[i];
    }

    // call to function and display result 
    std::cout << "The median of the array is: " << median_array(array,len) << std::endl;
    
    return 0;
}