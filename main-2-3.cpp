# include <iostream> 
extern void two_five_nine(int array[], int n);

int main() {
    // initialise 
    int len = 0;

    // prompt for user input 
    std::cout << "Enter the length of array: ";
    std::cin >> len;

    // initialise array
    int array[len];

    // prompt for user input using loop 
    for (int i = 0; i < len; i++) {
        std::cout << "Enter a value: ";
        std::cin >> array[i];
    }

    // call to function 
    two_five_nine(array, len);

    //return 
    return 0;
} 