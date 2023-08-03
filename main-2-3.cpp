#include <iostream>
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int len = 3;
    int nums[3] = {1,2,1};

    int sum = sum_if_palindrome(nums,len);

    std::cout << sum << std::endl;
}