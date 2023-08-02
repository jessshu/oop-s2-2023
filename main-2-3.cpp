#include <iostream>
// extern bool is_palindrome(int integers[], int length);
// extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int len = 6;
    int nums[6] = {1,2,3,3,2,1};

    int sum = sum_if_palindrome(nums,len);

    std::cout << sum << std::endl;
}