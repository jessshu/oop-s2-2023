#include <iostream> 
extern double array_mean(int array[], int n);

int main() {
    // initialise variables 
    int number = 0; 

    std::cout << "Enter the length of your array: "; 
    std::cin >> number; 

    int array[number];

    for (int i = 0; i < number; i++) {
        std::cout << "Enter a value: "; 
        std::cin >> array[i];
    }

    std::cout << "The average is: " << array_mean(array, number) << std::endl; 
    
    return 0; 
}