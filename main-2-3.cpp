#include <iostream>
// extern bool is_palindrome(int integers[], int length);
// extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int len = 5;
    int nums[5] = {1,2,3,2,1};

    int sum = sum_if_palindrome(nums,len);

    std::cout << sum << std::endl;
}