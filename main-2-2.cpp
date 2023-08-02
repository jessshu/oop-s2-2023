#include <iostream> 
extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    // init vars 
    int binary_digits[] = {1,0,1,1};
    int number_of_digits = 4;

    // call function 
    std::cout << binary_to_int(binary_digits, number_of_digits);
    std::cout << std::endl;
}