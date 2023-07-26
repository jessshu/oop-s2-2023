# include <iostream> 
extern bool is_fanarray(int array[], int n);

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
    if (is_fanarray(array, len)) {
        std::cout << "The array is a fan array." << std::endl; 
    } else {
        std::cout << "The array is not a fan array." << std::endl;
    }
    return 0;
}