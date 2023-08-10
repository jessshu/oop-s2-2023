#include <iostream>
# include <math.h> 
extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {
    int len = 5;
    int binary[5] = {1,0,1,1,1};

    std::cout << bin_to_int(binary,len) << std::endl;

    return 0;
}