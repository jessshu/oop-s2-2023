#include <iostream> 
extern int array_sum(int array[], int n);

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

    std::cout << "The sum is: " << array_sum(array, number) << std::endl; 
    
    return 0; 

}