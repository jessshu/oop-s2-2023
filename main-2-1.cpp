# include <iostream>
extern int min_element(int array[], int n);

int main() {
    // initialise variables 
    int len = 0;

    // prompt for input 
    std::cout << "Enter the length of array: ";
    std::cin >> len;

    // initialise array to inputted length
    int array[len];

    //prompt for input for array 
    for (int i = 0; i < len; i++) {
        std::cout << "Enter a value: ";
        std::cin >> array[i];
    }

    // call to function and print result 
    std::cout << "The minimum value in the array is " << min_element(array,len) << std::endl;

    return 0;
}