#include <iostream>
extern int palindrome_sum(int integers[], int length);

int main() {
    int len = 4;
    int arr[4] = {1,2,2,1};

    // call to function 
    if (palindrome_sum(arr,len) != -2) {
        std::cout << "The sum of this palindrome is: " << palindrome_sum(arr,len) << std::endl;
    } else {
        std::cout << "Not a palindrome" << std::endl;
        return 0;
    }

    return 0;
}