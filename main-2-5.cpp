// this shit fucking works just gotta ask the same question as for -2-4
#include <iostream> 
extern bool is_descending(int array[], int n);

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
    if (is_descending(array,len) == 1) {
        std::cout << "The array is in descending order."
                  << std::endl;
    } else if (is_descending(array,len)) {
        std::cout << "The array is not in descending order."
                  << std::endl;
    }

    return 0;
}